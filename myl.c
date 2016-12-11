#define BUFF 32
#define ERR 1
#define OK 0

/* Function to print the floating point number*/
int printd(float n){
	char buff[BUFF],zero = '0';
	int i=0, j = 0, l, count=0, m, k, bytes;
	int msb, extrazeros=0;
	float temp;

	/*Negate in case the number is negative*/
	if(n < 0){
		buff[i++] = '-';
		n = -n;
	} 

	/*Find the number of digits before the decimal point(one's,ten's etc)*/
	temp = n;
	while(temp > 1){
		temp = temp/10;				
		count++;
	}

	j = 0;
	temp = n;
	/*Add the non fractional part to the buffer in reverse order*/
	while(j < count){
		msb = (int)temp % 10;
		temp = temp / 10;
		buff[i++] =(char)(msb+zero);
		j++;
	}

	/* Swap the order in which the numbers are stored to get the actual non-fractional part*/
	if(buff[0] == '-') 
		m = 1;
	else m = 0;
	k = i-1;
	while(m < k){
		char temp=buff[m];
		buff[m++] = buff[k];
		buff[k--] = temp;
	}

	/*Store the fractional part in the buff character array*/
	buff[i++] = '.';
	while(j<20){
		n = n * 10;
		temp = n;
		msb = (int)temp % 10;
		/*Neglecting the zeros incase there is no non-zero number following*/
		if(msb == 0){
			extrazeros++;
		}
		/*Break when division exhausts*/
		else if ((char)(msb+zero) == '('){
			break;
		}
		else{

			/*Printing the zeros incase there is non-zero number following*/
			for(l=0;l <extrazeros; l++){
				buff[i++] = '0'; 		
			}
			extrazeros = 0;
			buff[i++] = (char)(msb+zero);
		}
		j++;
	}

	buff[i]='\n';
	bytes = i+1;

	/*Printing the floating point number*/
	__asm__ __volatile__ (
	"movl $1, %%eax \n\t"
	"movq $1, %%rdi \n\t"
	"syscall \n\t"
	:
	:"S"(buff), "d"(bytes)
	) ; // $4: write, $1: on stdin

	return (bytes - 1);
}


/*Function to print an integer*/
int printi(int n){
	char buff[BUFF],zero = '0';
	int i=0, m, k, bytes;
	int msb;

	/*Negate in case the number is negative*/
	if(n < 0){
		buff[i++] = '-';
		n = -n;
	} 

	/*Storing all the digits in reverse order*/
	while(n > 0){
		msb = n % 10;
		n= n/10;				
		buff[i++] =(char)(msb+zero);
	}


	/*Swapping the digits of the array to get the actual order*/
	if(buff[0] == '-') 
		m = 1;
	else m = 0;
	k = i-1;
	while(m < k){
		char temp=buff[m];
		buff[m++] = buff[k];
		buff[k--] = temp;
	}

	buff[i]='\n';
	bytes = i+1;

	/*Printing the integer*/
	__asm__ __volatile__ (
	"movl $1, %%eax \n\t"
	"movq $1, %%rdi \n\t"
	"syscall \n\t"
	:
	:"S"(buff), "d"(bytes)
	) ;

	return (bytes - 1);



}

/*Function to print the string*/
int prints(char *s) {
	char buff[BUFF];
	int i=0, l = 0, bytes;

	/* Return 0 is null string*/
	if(s[0] == '\0'){
		return 0;
	} 
	/*Push into the array until the null string has been encountered*/
	else {
		while(s[l] != '\0'){
			char character = s[l];
			buff[i++] = character;
			l++;
		}
	}

	buff[i]='\n';
	bytes = i+1;

	/* Print the string*/
	__asm__ __volatile__ (
	"movl $1, %%eax \n\t"
	"movq $1, %%rdi \n\t"
	"syscall \n\t"
	:
	:"S"(buff), "d"(bytes)
	) ; // $4: write, $1: on stdin
	
	return (bytes - 1);
}

/* Function to read the floating point number*/
int readf(float *fP){
	int i, decimalpoint;
	float retarg,retdecimal,decimal;
	char buff[BUFF];
	/* Populating the buff array with user input*/
	__asm__ __volatile__ (
		"movl $0, %%eax \n\t"
		"movq $0, %% rdi \n\t"
		"syscall \n\t"
		:
		: "S"(buff), "d"(20)
		);

	retarg = 0;
	retdecimal = 0;
	decimal = 1;
	/* Incase if the number is negative*/
	if(buff[0] == '-'){
		i = 1;
	}
	else i = 0;
	decimalpoint = 0;
	/*Continue till the newline character is encountered(means float number ended)*/
	while(buff[i] != '\n')
	{
		/*Check whether decinal point is not yet encountered, if not enter*/
		if(47 < (int)buff[i] && decimalpoint == 0){
			/* Check whether the character falls in 0-9 range*/
			if((int)buff[i] < 58){
				retarg *= 10;
				retarg += (int)buff[i] - 48;
				i++;
			}
			/* Else return error*/
			else {
				
				if(buff[0] == '-'){
					(*fP) = -(retarg + retdecimal);
				}
				else (*fP) = retarg + retdecimal;
				return ERR;
			}
		}
		/* If decimal point is encountered, remember it*/
		else if(buff[i] == '.' && decimalpoint == 0){
			decimalpoint = 1;	
			i++;
		}
		/*Fractional part operations*/
		else if(decimalpoint == 1){
			/* Check whether the character falls in 0-9 range*/
			if(47 < (int)buff[i]){
				if((int)buff[i] < 58){
					decimal *= 0.1;
					retdecimal += (((int)buff[i] - 48)*decimal);
					i++;
				}
				/* Else return error*/
				else {
					if(buff[0] == '-'){
						(*fP) = -(retarg + retdecimal);
					}
					else (*fP) = retarg + retdecimal;
					return ERR;
				}
			}
			/* Else return error*/
			else {
				if(buff[0] == '-'){
					(*fP) = -(retarg + retdecimal);
				}
				else (*fP) = retarg + retdecimal;
				return ERR;
			}
		}
		/* If character out of range, return error*/
		else {
			if(buff[0] == '-'){
				(*fP) = -(retarg + retdecimal);
			}
			else (*fP) = retarg + retdecimal;
			return ERR;
		}
		
	}
	/* When it is a legit floating point number, return OK*/
	if(buff[0] == '-'){
		(*fP) = -(retarg + retdecimal);
	}
	else (*fP) = retarg + retdecimal;
	return OK;
}

/* Fucntion to read integer*/
int readi(int *ep){
	int retarg, i;
	char buff[BUFF];

	/* Read integer from the user*/
	__asm__ __volatile__ (
		"movl $0, %%eax \n\t"
		"movq $0, %% rdi \n\t"
		"syscall \n\t"
		:
		: "S"(buff), "d"(20)
		);

	retarg = 0;
	/*Negate the negative number*/
	if(buff[0] == '-'){
		i = 1;
	}
	else i = 0;

	/*Continue till the newline character is encountered(means integer number ended)*/
	while(buff[i] != '\n')
	{	
		/*Check whether decinal point is not yet encountered, if not enter*/
		if(47 < (int)buff[i]){
			/* Check whether the character falls in 0-9 range*/
			if((int)buff[i] < 58){
				retarg *= 10;
				retarg += (int)buff[i] - 48;
				i++;
				*ep = OK;	
		
			}
			/* Else return error*/
			else {
				(*ep) = ERR;
				if(buff[0] == '-'){
					return (-retarg);
				}
				else return retarg;
				
			}
		}
		/* Else return error*/
		else {
				(*ep) = ERR;
				if(buff[0] == '-'){
					return (-retarg);
				}
				else return retarg;
		}
		
	}
	/* When it is a legit integer number, return OK*/
	(*ep) = OK;
	if(buff[0] == '-'){
		return (-retarg);
	}
	else return retarg;	
}
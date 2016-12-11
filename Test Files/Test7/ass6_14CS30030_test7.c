///MAX of 3 numbers

//This program will ask the user to enter three numbers
//It will invoke a function which will return the maximum of them
//It will be a good example of condition checking.

int findmax(int a,int b,int c)
{
	int max = a;
	if(b>a)
	{
		if(b>c)			
		max = b;
		else
			max = c;
	}
	else if(c>a)
	{
		max = c;
	}

	return max;

}


int main()
{
	int a,b,c,err;
	a = err;
	b = err;
	c = err;

	int max;
	max = findmax(a,b,c);

	a = b*c*a;
	b = a/c;
	
	c = a%b;
		
	return 0;
}

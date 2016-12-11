
int main(){

	int n,c;
	int*ep;
	ep = &c;
	prints("------------SUM TEST FILE-------------");
	prints("Here we find the sum of numbers upto a number"); 
	prints("using ITERATIVE approach thus ");
	prints("testing different loops:");
	prints("Enter the number :");
	n=readi(ep);
	int i=0;
	int sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	prints("");
	prints("Sum calculated using FOR LOOP :");
	printi(sum);
	sum=0;
	i=1;

	prints("");
	prints("Sum calculated using WHILE LOOP :");
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printi(sum);
	sum=0;
	i=1;

	prints("");
	prints("Sum calculated using DO-WHILE LOOP :");
	do
	{
		sum=sum+i;
		i++;
	}while(i<=n);
	printi(sum);
	prints("");
}
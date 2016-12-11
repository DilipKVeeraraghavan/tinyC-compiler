int gcd(int a,int b)
{
	int m,n,h;
	if(a==b)
		return a;
	else
	{
		if(a>b)
		{
			m = a-b;
			n = b;
		}
		else
		{
			m = b-a;
			n = a;
		}
		h = gcd(m,n);
		return h;
	}
}
int main()
{
	int a,b,c,d;
	int*ep;
	ep = &c;
	prints("\n");
	prints("\n----------Here we test GCD :---------");
	prints("\nEnter 2 numbers for finding their gcd recursively");
	a = readi(ep);
	b = readi(ep);
	d = gcd(a,b);
	prints("\nThe gcd of the 2 numbers you entered is :");
	printi(d);
	prints("\n");
	return 0;
}
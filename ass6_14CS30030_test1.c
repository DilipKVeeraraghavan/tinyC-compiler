int gcd(int x)
{
	
	int a = x/10000;
	int b = x %10000;	
	int m,n,h;
	int pass;
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
		pass = m * 10000 + n;
		h = gcd(pass);
		return h;
	}
}
int main()
{
	int a,b,c,d;
	int*ep;
	int pass;
	ep = &c;
	prints("\n");
	prints("\n----------Here we test GCD :---------");
	prints("\nEnter 2 numbers for finding their gcd recursively");
	a = readi(ep);
	b = readi(ep);
	pass = a*10000 + b;
	d = gcd(pass);
	prints("\nThe gcd of the 2 numbers you entered is :");
	printi(d);
	prints("\n");
	return 0;
}

int quickSort (int a[11])
{
	int r ;
    int y =a[10];
    int i=y/10000, j=y%10000, t;
    int x,h;
    r = y/10000+y%10000;
    int pass;
    r = r/2;
    printi(a[0]);
    prints("\n");
    do
    {   
    	r = a[i];
        while (r<x)
        {
        	i++; 
        	r = a[i];
        }
        r = a[j];
        while (r>x)
        {
        	j--;
        	r = a[j];
        }
        
    	if (i<=j)
        {
            h=a[i];
            r = a[j];
            a[i]=r;
            a[j]=h;
            i++; j--;
        }
    } while (i<=j);
    
    pass = (y/10000) * 10000 + j;
    a[10] = pass;
    if (y/10000<j) quickSort(a);
    
    pass = i * 10000 + y%10000;
    a[10] = pass;
    if (i<y%10000) quickSort(a);

    return 0;
}
int main()
{
    int a[11];

	int c,n,i;
	int*ep;
	ep = &c;
    int pass;
	prints("");
	prints("--------------QUICKSORT TEST FILE---------------");
	prints("Here we sort an array of elements"); 
	prints("using recursive approach:");
	prints("Enter the 10 elements of array ");
	for(i=0;i<10;i++)
	{
		r = readi(ep);
		a[i] = r;
	}
    pass = 9;
    a[10] = pass;
	quickSort(a);
	prints("The sorted array (in ascending order) follows :");
	for(i=0;i<10;i++)
	{
		r = a[i];
		printi(r);
		prints("");
	}
    return 0;
}
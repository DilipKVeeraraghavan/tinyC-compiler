

int main()
{
	int p[50], n,j, i, d, temp;

  	int err;
  	n = err;

  for (i = 0 ; i <  n - 1 ; i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (p[j] > p[j+1]) 
      {
        temp       = p[j];
        p[j]   = p[j+1];
        p[j+1] = temp;
      }
    }
  }
 

 
	return 0;
}



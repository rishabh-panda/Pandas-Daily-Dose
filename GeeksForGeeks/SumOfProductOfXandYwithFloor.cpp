long long int sumofproduct(int n)
	{
	    long long int y, sum=0;
	    for(int x=1; x<=n; x++)
	    {
	        y=n/x;
	        sum+=(x*y);
	    }
	    return sum;
	}

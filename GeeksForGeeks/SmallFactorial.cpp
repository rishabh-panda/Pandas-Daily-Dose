long long int find_fact(int n)
		{
		    long long int fact = 1;
		    for(int i=n;i>=1;i--)
		    {
		        fact*=i;
		    }
		    return fact;
		}
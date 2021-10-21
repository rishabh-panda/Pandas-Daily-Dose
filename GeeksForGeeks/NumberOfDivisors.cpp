int count_divisors(int n)
		{
		    int c=0;
		    for(int i=1;i*i<=n;i++)
		    {
		        if(n%i==0)
		        {
		            if(i%3==0)
		              c++;
		            if(n/i!=i && (n/i)%3==0)
		            {
		                c++;
		            }
		        }
		    }
		    return c;
		}
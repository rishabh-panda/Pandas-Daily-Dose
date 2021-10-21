long long int sum_of_square_evenNumbers(long long int n)
		{
		    long long int sum=0, odd=2;
		    for(int i=0;i<n;i++)
		    {
		        sum+=odd*odd;
		        odd=odd+2;
		    }
		    return sum;
		}
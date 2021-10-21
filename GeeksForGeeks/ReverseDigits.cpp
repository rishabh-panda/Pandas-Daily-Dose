long long int reverse_digit(long long int n)
		{
		    long long int rev = 0;
		    long long int rem;
		    while(n)
		    {
		        rem = n%10;
		        rev = rev*10 + rem;
		        n/=10;
		    }
		    return rev;
		}
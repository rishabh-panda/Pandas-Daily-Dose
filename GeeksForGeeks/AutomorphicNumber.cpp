string is_AutomorphicNumber(int n)
		{
		    int temporary=n;
		    int counter1=0, counter2=0;
		    int square=n*n;
		    
		    while(temporary>0)
		    {
		        temporary/=10;
		        counter1++;
		    }
		    
		    while(n>0)
		    {
		        if(n%10 == square%10)
		        {
		            counter2++;
		        }
		        n/=10;
		        square/=10;
		    }
		    
		    if(counter1==counter2)
		    {
		        return "Automorphic";
		    }
		    else
		    {
		        return "Not Automorphic";
		    }
		}
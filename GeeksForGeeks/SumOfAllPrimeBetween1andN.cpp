long long int prime_Sum(int n)
   	{
   	    //create a vector (given size+1) and fill it with all true
   	    vector<bool> v((n+1), true);
   	    long long int sum=0;
   	    
        //make all those elements false which satisfy the second for loop
   	    for(int i=2; i<=sqrt(n); i++)
   	    {
   	        if(v[i]==true)
   	        {
              //this one
   	            for(int j=pow(i,2); j<=n; j+=i)
   	            {
   	                v[j]=false;
   	            }
   	        }
   	        
   	    }
   	    
  //iterate and update the sum for all true vector elements
   	    for(int i=2; i<=n; i++)
   	    {
   	        if(v[i]==true)
   	        {
   	            sum+=i;
   	        }
   	    }
   	    
   	    return sum;
   	}

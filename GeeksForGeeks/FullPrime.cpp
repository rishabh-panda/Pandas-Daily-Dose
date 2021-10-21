int isPrime(int x)
    {
        	    if(x==1||x==0)
	    return 0;
	    for(int i=2;i<=sqrt(x);i++)
	    {
	        if(x%i==0)
	        return 0;
	    }
	    return 1;
	}
	
	int fullPrime(int N){
	    int rem=0;
	    if(isPrime(N)==0)
	    return 0;
	    
	    
	    while(N)
	    {
	        rem=N%10;
	        if(isPrime(rem)==false)
            return 0;	       
	        N=N/10;
	    }
	    return 1;
	}
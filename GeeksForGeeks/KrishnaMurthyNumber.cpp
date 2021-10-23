int fact(int n)
    {
        if(n<=1)
        {
            return 1;
        }
        return n*fact(n-1);
    }
  
    string isKrishnamurthy(int N) {
        
        int tempo=N;
        int rem;
        int sum=0;
        
        while(N)
        {
           rem=N%10;
           sum+=fact(rem);
           N/=10;
        }
        
        if(sum==tempo)
        {
            return "YES";
        }
        return "NO";
    }

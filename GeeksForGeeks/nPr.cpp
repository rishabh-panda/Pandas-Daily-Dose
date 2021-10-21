long long int fact(int n)
    {
        long long int fact = 1;
        for(int i=1;i<=n;i++)
        {
            fact*=i;
        }
        return fact;
    }
    
    long long nPr(int n, int r){
        
        long long int permutation = fact(n)/fact(n-r);
        return permutation;
    }
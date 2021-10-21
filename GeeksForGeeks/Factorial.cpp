long long int factorial(int N){
        long long int fact=1;
        for(int i=1; i<=N; i++)
        {
            fact*=i;
        }
        return fact;
    }

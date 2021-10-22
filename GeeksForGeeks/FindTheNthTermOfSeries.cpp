// 9, 33, 73, 129, ...

long long int nthOfSeries(long long int n){
        long long int a=9, d=24;
        for(int i=1; i<n; i++)
        {
            a=a+d;
            d=d+16;
        }
        return a;
    }

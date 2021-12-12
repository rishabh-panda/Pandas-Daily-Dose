long long minTime(long long a[], long long b[], long long n)
    {
        long long time1=0, time2=0;
        
        //case 1: catching train A first
        for(long long i=0; i<n; i++)
        {
            if(i%2 == 0)
            {
                time1+=a[i];
            }
            
            else time1+=b[i];
        }
        
        //case 2: catching train B first
        for(long long i=0; i<n; i++)
        {
            if(i%2 != 0)
            {
                time2+=a[i];
            }
            
            else time2+=b[i];
        }
        
        //optimized time (least time duration)
        if(time1>time2)
        {
            return time2;
        }
        
        return time1;
    }

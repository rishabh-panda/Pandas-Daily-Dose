int maximizeMoney(int N , int K) {
        int count=0;
        for(int i=0; i<N; i++)
        {
            if(i%2==0)
            {
                count++;
            }
        }
        
        return K*count;
    }

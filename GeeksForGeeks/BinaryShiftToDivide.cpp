int half(int N){
        
        int dividend=N, divisor=2;
        
        if(N==1)
        {
            return 1;
        }
        
        return N>>1;
    }

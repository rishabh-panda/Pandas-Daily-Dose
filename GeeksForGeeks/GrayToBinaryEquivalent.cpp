int grayToBinary(int n)
    {
        int result=0;
        while(n)
        {
            result^=n;
            n>>=1;
        }
        return result;
        
    }

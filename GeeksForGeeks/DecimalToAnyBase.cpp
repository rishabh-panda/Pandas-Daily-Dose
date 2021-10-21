string getNumber(int B, int N)
    {
        string s="0123456789ABCDEF",a;
        
        while(N){
            int r=N%B;
            a+=s[r];
            N/=B;
        }
        reverse(a.begin(),a.end());
        return a;
    }
string delAlternate(string S) {
        string s="";
        
        for(int i=0;i<S.size();i++)
        {
            if(i%2==0)
            {
                s+=S[i];
            }
        }
        return s;
    }
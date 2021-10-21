string longest(string names[], int n)
    {
        int L, max=0, ans=0;
        for(int i=0;i<n;i++)
        {
            L = names[i].length();
            while(L>max)
            {
                max = L;
                ans = i;
            }
        }
        return names[ans];
    }
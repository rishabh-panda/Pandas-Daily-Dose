void printFloydTriangle(int N)
    {
        int pattern = 1;
        for(int i=1;i<=N;i++)
        {
            for(int j=1;j<=N;j++)
            {
                if(i >= j)
                {
                    cout<<pattern<<" ";
                    pattern++;
                }
                else cout<<" ";
            }
            cout<<endl;
        }
    }
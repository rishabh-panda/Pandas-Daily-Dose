vector<int> findElements(int a[], int n)
    {
        vector<int> v;
        sort(a, a+n);
        for(int i=0;i<n-2;i++)
        {
            v.push_back(a[i]);
        }
        return v;
    }
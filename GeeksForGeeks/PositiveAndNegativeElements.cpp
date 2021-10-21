vector<int> arranged(int a[],int n)
    {
        vector<int> negative,positive,c;
        for(int i=0;i<n;i++){
            if(a[i]<0){
                negative.push_back(a[i]);
            }
            if(a[i]>0){
                positive.push_back(a[i]);
            }
        }
        for(int i=0;i<n;i++){
            c.push_back(positive[i]);
            c.push_back(negative[i]);
        }
        return c;
    }

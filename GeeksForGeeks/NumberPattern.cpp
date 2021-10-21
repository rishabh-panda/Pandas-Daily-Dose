vector<string> numberPattern(int N)
    {
        vector<string>v;
        for(int i=0;i<N;i++)
        {
            
            string str="";
            int num=1;
            for(int j=0;j<(i*2+1)/2;j++)
            {
                str += to_string(num);
                num++;
            }
            str += to_string(num);
            
            for(int j=(i*2+1)/2+1;j<(i*2+1);j++)
            {
                num--;
                str += to_string(num);
            }
            v.push_back(str);
        }
        return v;
    }
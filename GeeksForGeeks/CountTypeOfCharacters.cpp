vector <int> count (string s)
        {
            int a=0, b=0, c=0, d=0;
            vector<int> v;
            for(int i=0; i<s.size(); i++)
            {
                if(isupper(s[i]))
                {
                    a++;
                }
                
                else if(islower(s[i]))
                {
                    b++;
                }
                
                else if(s[i]>=48 && s[i]<=57)
                {
                    c++;
                }
                
                else d++;
            }
            
            v.push_back(a);
            v.push_back(b);
            v.push_back(c);
            v.push_back(d);
            
            return v;
        }
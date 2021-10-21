vector<int> find_sum(int n)
		{
		    int e,o;
		    vector<int> S;
		    e=0;o=0;
		    for(int i=1;i<=n;i++)
		    {
		        if(i%2==0)
		            e+=i;
		        else
		            o+=i;
		    }
		    S.push_back(o);
		    S.push_back(e);
		    return S;

		}
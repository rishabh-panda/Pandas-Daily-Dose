string removeVowels(string S) 
	{
	    string resultant="";
	    for(int i=0;i<S.length();i++)
	    {
	        if(S[i]!='a' && S[i]!='e' && S[i]!='i' && S[i]!='o' && S[i]!='u')
	        {
	            resultant+=S[i];
	        }
	    }
	    return resultant;
	}
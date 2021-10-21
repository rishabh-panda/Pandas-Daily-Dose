int countCamelCase (string s)
    {
    	int count = 0;
    	for(int i=0; i<s.size(); i++)
    	{
    	    if(isupper(s[i]))
    	    {
    	        count++;
    	    }
    	}
    	return count;
    }
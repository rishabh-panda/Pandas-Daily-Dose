vector<string> extractIntegerWords(string s)
{
    vector<string> v;
    int i=0;
    
    while(i<s.length())
    {
        string temp="";
        while(i<s.length() && s[i]>='0' && s[i]<='9')
        {
            temp+=s[i];
            i++;
        }
        
        if(temp!="")
           v.push_back(temp);
        i++;
    }
    return v;
}

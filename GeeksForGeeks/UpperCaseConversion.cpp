string transform(string s)
{

    for(int i=0;i<s.size();i++)
    {
        s[0] = toupper(s[0]);
        if(s[i] == ' ')
        {
            s[i+1] = toupper(s[i+1]);
        }
    }
    return s;
}
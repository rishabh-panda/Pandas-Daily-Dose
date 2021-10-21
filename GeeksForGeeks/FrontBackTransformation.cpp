string convert(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i] = 'z'-s[i]+'a';
        }
        else s[i] = 'Z'-s[i]+'A';
    }
    return s;
}
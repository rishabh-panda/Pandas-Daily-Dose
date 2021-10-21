string to_upper(string str){
        for(int i=0;i<str.size();i++)
        {
            if(islower(str[i]))
             str[i]=toupper(str[i]);
            
        }
        return str;
}
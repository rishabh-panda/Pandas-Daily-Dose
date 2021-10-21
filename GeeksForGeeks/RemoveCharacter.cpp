string removeChars(string string1, string string2) {
        string tempo="";
        
        for(int i=0; i<string2.length(); i++)
        {
            tempo="";
            
            for(int j=0; j<string1.length(); j++)
            {
                if(string2[i]!=string1[j])
                {
                    tempo+=string1[j];
                }
            }
            string1=tempo;
        }
        return string1;
    }

bool isBinary(string str)
{
   for(int i=0; i<str.size(); i++)
   {
       if(str[i]=='0' || str[i]=='1')
       {
           continue;
       }
       else return false;
   }
   return true;
}
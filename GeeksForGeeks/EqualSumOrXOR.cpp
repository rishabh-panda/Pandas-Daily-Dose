int countValues (int n)
{
   int count=0;
   
   for(int i=0; i<=n; i++)
   {
       if((n+i)==(n^i))
       {
           count++;
       }
   }
   return count;
}

int bitMultiply(int N)
    {
      int temp=N, count=0;
      while(N) 
      {
         N&=(N-1);
         count++;
      }
      
      return temp*count;
    }

long long reverse(long long n)
    {
        long long rev = 0;
        while(n>0)
        {
            long long rem=n%10;
            rev = rev*10 + rem;
            n=n/10;
        }
        return rev;
    }
    
    long long isSumPalindrome(long long n){
      if(n == reverse(n))
      {
          return n;
      }
      int var = 0;
      while(var<5)
      {
          n=n+reverse(n);
          if(n==reverse(n))
          {
              return n;
          }
          var++;
      }
      return -1;
    }
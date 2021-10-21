int convertFive(int n)
    {
        if(n == 0)
          {return 5;}
        if(n%10 == n)
          {return n;}
        return (10*convertFive(n/10)+(n%10==0 ? 5 : n%10));
    }
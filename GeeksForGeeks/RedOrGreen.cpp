int RedOrGreen(int N,string S) {
           int red=0, green=0;
           
           for(int i=0; i<N; i++)
           {
               if(S[i]=='R') red++;
               else green++;
           }
           return min(red, green);
    }

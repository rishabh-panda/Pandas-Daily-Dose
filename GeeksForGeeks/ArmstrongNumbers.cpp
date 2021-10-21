string armstrongNumber(int n){
         int num = n;
         int temp = num;
         int sum = 0;
         int count = 0;
         while(temp>0) 
         {
             int q = temp%10;//last digit
             temp = temp/10;//size reduction
             count++;
         }
         
         while(num>0) 
         {
             int q = num%10;
             int mul=1;
             for(int i = 0; i<count; i++) 
             {
                mul = mul*q;
             }
             sum+=mul;
             num/=10;
         }
         if(n!=sum)
           return "No";
           return "Yes";
    }
int isDigitSumPalindrome(int N) {
        int temp = N;
        int sum = 0;
        int rev = 0;
        int rem;
        //calc sum
        while(temp)
        {
            sum+=temp%10;
            temp/=10;
        }
        temp = sum;
        while(temp)
        {
            rem = temp%10;
            rev = rev*10+rem;
            temp/=10;
        }
        if(sum == rev)
        return 1;
        else return 0;
    }
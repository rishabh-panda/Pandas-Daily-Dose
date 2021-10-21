int reverseDigits(int num)
    {
        int rev_num = 0;
        while (num > 0) 
        {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
        }
    return rev_num;
    }
	    
		string is_palindrome(int n)
		{
		    int rev_n = reverseDigits(n);

            if (rev_n == n)
              cout<<"Yes";
            else
              cout<<"No";
		}
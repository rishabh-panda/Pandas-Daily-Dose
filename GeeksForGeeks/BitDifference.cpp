int countBitsFlip(int a, int b){
        
        int x=a^b;
        int count=0;
        
        //while loop used to count the number of one's (HIGH) 
        //present in the result obtained after XOR operation.
        while(x!=0)
        {
            x-=(x&-x);
            count++;
        }
        
        return count;
        
    }

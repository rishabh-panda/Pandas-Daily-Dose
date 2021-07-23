#include<stdio.h>
    int main() {
 
    int i=1,n=8,sum=0;
        while(i<11)
        {
            sum+=n*i;
            i++;
        }
        printf("Sum = %d",sum);
        
    return 0;
}
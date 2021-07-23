#include<stdio.h>
    int main() {
 
    int n, flag=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    for (int i = 2; i < n/2; i++)
    {
        if (n%i==0)
        {
            printf("Not Prime");
            flag=1;
            break;
        }
        
    }

    if (flag==0)
    {
        printf("Prime");
    }

    return 0;
}
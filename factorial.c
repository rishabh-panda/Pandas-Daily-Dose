#include<stdio.h>
    int main() {

    int fact=1; int i=1,n;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=n){
        fact*=i;
        ++i;
    }
    printf("Factorial = %d",fact);
    
    return 0;
}
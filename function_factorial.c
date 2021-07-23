#include<stdio.h>
    
    int factorial(int a); //prototype
    int n;
    int main() {
 
    printf("\n\n\nEnter a number: ");
    scanf("%d",&n);
    printf("\n\nFactorial = %d",factorial(n)); //call
 
    return 0;
}

int factorial(int a) //definition
{
    if (a==0 || a==1)
    {
        return 1;
    }
    else
    {
        return a*factorial(a-1);
    }
    
}
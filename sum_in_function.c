#include<stdio.h>
int sum(); //prototype
    int main() {
 
    int add;
    add=sum(36,64); //call
    printf("%d",add);
 
    return 0;
}

int sum(int a, int b) //definition
{
    int result;
    result=a+b;
    return result;
}
#include<stdio.h>
int a,b,c;
    int avg(int a, int b, int c);//prototype
    int main() {
    
    printf("Enter A: ");
    scanf("%d",&a);
    printf("Enter B: ");
    scanf("%d",&b);
    printf("Enter C: ");
    scanf("%d",&c);
    printf("Average(A,B,C): %.2d",avg(a,b,c)); //call
 
    return 0;
}

int avg(int a, int b, int c) //definition
{
    int result;
    result=(a+b+c)/3;
}
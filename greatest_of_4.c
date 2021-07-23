#include<stdio.h>
    int main() {
 
    int a,b,c,d;
    printf("Enter first no: ");
    scanf("%d",&a);
    printf("Enter second no: ");
    scanf("%d",&b);
    printf("Enter third no: ");
    scanf("%d",&c);
    printf("Enter fourth no: ");
    scanf("%d",&d);

    if(a>b && a>c && a>d)
         {printf("The greatest number is %d ",a);}
    else if(b>a && b>c && b>d)
         {printf("The greatest number is %d ",b);}
    else if(c>a && c>b && c>d)
         {printf("The greatest number is %d ",c);}
    else 
         {printf("The greatest number is %d ",d);}

    return 0;
}
#include<stdio.h>
    int main() {
 
    float area,l,b;
    printf("Enter Length:");
    scanf("%f",&l);
    printf("Enter Breadth:");
    scanf("%f",&b);
    area=l*b;
    printf("Area: %.2f units",area);
 
    return 0;
}
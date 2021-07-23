#include<stdio.h>
    int main() {
 
    # define pi 3.14
    float rad,area,circum;
    printf("Radius:");
    scanf("%f",&rad);
    area=pi*rad*rad;
    circum=2*pi*rad;
    printf("Area: %.2f units\n",area);
    printf("Circumference: %.2f units",circum);
 
    return 0;
}
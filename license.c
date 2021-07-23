#include<stdio.h>
    int main() {
 
    int age;
    printf("Enter your age:");
    scanf("%d",age);

    if (age>=18 || age<=70)
    {
        printf("Congo! Ready to drive...");
    }
    else
    {
        printf("Sorry! Not allowed to drive.");
    }

    return 0;
}
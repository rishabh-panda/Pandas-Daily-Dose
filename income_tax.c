#include<stdio.h>
    int main() {
 
    float income, tax_paid;
    printf("Enter your income: ");
    scanf("%f",&income);
    if (income>=250000 && income<500000)
    {
        printf("Tax Amount(5 percent): Rs. %f /-",(0.05*income));
    }
    else if (income>=500000 && income<1000000)
    {
        printf("Tax Amount(20 percent): Rs. %f /-",(0.2*income));
    }
    else if (income>=1000000)
    {
        printf("Tax Amount(30 percent): Rs. %f /-",(0.3*income));
    }
    else
    {
        printf("You are exempted from tax payment.");
    }
     
    return 0;
}
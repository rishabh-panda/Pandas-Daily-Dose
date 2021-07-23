# include<stdio.h>
void main()
{
    float centigrade, kelvin;
    printf("Enter Temperature in Centigrade: ");
    scanf("%f",&centigrade);

    kelvin=centigrade+273.15;

    printf("Temperature in Fahrenheit: %.2f Kelvins", kelvin); 
}
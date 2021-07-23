# include<stdio.h>
void main()
{
    float centigrade, fahrenheit;;
    printf("Enter Temperature in Centigrade: ");;
    scanf("%f",&centigrade);;

    fahrenheit=((1.8*centigrade)+32.0);;

    printf("Temperature in Fahrenheit: %.3f", fahrenheit); 
}
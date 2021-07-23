#include<stdio.h>
#include<stdlib.h>  //for generating random numbers
#include<time.h>

    int main() {
 
    int number,guess,number_of_guesses=1; 
    srand(time(0)); //time library
    number=rand()%100+1;       // generates random number b/w 1 & 100

    //printf("Random: %d",number);
    printf("\n\n\nWELCOME TO THE GAMING KLUB");
    printf("\n__________________________");
    do
    {
        printf("\n\nGUESS THE NUMBER: ");
        scanf("%d",&guess);

        if (guess>number)
        {
            printf("\nLOWER NUMBER PLEASE");
        }
        else if (guess<number)
        {
            printf("\nHIGHER NUMBER PLEASE");
        }
        else
        {
            printf("\nCONGRATULATIONS...\nYOU GOT IT IN %d GUESSES",number_of_guesses);
        }
        number_of_guesses++;
    } while (guess!=number);
    
 
    return 0;
}
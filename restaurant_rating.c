#include<stdio.h>
    int main() {  

    int rating;
    printf("Enter your rating (1-5):");
    scanf("%d",&rating);

    switch (rating)
    {
    case 1:
        printf("You have rated 1");
        break;
    case 2:
        printf("You have rated 2");
        break;
    case 3:
        printf("You have rated 3");
        break;
    case 4:
        printf("You have rated 4");
        break;
    case 5:
        printf("You have rated 5");
        break;    
    default:
        printf("Invalid rating");
        break;
    }  

    return 0;
}
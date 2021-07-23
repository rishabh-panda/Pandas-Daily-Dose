#include<stdio.h>
#include<stdlib.h>  //for generating random numbers
#include<time.h>

    int main() {
 
    int n;
    srand(time(0)); //time library
    n=rand()%100+1;       // generates random number b/w 1 & 100

    printf("Random: %d",n);
 
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

    int main() {
 
    int n;
        
    //time library
    srand(time(0));
    
    // generates random number b/w 1 & 100
    n=rand()%100+1;

    printf("Random: %d",n);
 
    return 0;
}

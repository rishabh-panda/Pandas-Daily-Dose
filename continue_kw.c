#include<stdio.h>
    int main() {
 
    int i=0, a=5;
    
    while(i<10) {
        i++;
        if(i!=a){
         continue;}
        else
        {
            printf("%d\n",i);
        } 
        
    };
 
    return 0;
}
#include<stdio.h>
    int main() {
 
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if(ch>=97 && ch<=122)
      {
          printf("Lowercase Character");
      }
      else
      {
          printf("Uppercase Character");
      }
      
    return 0;
}
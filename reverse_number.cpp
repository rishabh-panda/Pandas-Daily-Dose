#include<iostream>
using namespace std;

int main() {
int n, lastdigit;
cout<<"enter the num: ";
cin>>n;

//initializing the variable to store result
int reverse = 0;
    
//iterating till the number gets reversed
while(n>0) {
    lastdigit = n%10;
    reverse = reverse*10 + lastdigit;
    n = n/10;
}

cout<<"reversed: "<<reverse;
return 0;
}

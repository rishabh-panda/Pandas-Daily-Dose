#include<iostream>
#include<math.h>
using namespace std;

int main() {
int n, digits, lastdigit;

cout<<"how many digits does the no have?: ";
cin>>digits;
cout<<"enter a "<<digits<<" digit number: ";
cin>>n;

    //temporary variable
int n_storage = n;
int sum = 0;
while(n>0) {
    lastdigit = n%10;
    sum+=pow(lastdigit,digits);
    n = n/10;
}
if (sum == n_storage)
{
    cout<<"Armstrong";
}
else cout<<"Not Armstrong";
}

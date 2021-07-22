#include<iostream>
using namespace std;

int main() {

int n, sum=0;
cout<<"enter a natural number: ";
cin>>n;

for (int i=0; i<=n; i++)
{
    sum+=i;
}
cout<<"sum: "<<sum;

return 0;
}
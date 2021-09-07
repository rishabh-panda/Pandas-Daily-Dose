#include<iostream>
using namespace std;

int main() {

int a,b,c;
cout<<"enter three numbers: \n";
cin>>a>>b>>c;

    //comparing first number with remaining
if (a>b && a>c)
{
    cout<<a<<" is great";
}
else if (b>c)
{
    cout<<b<<" is great";
}
else cout<<c<<" is great";


return 0;
}

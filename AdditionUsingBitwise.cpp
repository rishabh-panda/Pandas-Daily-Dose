#include<bits/stdc++.h>
using namespace std;

int BitAddition(int a, int b)
{
    while (b != 0)
    {
        // computing remainder
        unsigned rem = a & b;

        // performing xor optn.
        a ^= b;

        // final step: left shift
        b = rem << 1;

    }
    
    return a;
}

int main() {

int a,b;
cout<<"enter num a: "; cin>>a;
cout<<"enter num a: "; cin>>b;
cout<<"sum: "<<BinaryAddition(a,b);

return 0;
}

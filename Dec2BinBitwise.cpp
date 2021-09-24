#include<bits/stdc++.h>
using namespace std;

int DecToBinary(int n)
{
    for (int i = 32; i > 0; i--)
    {
        n >> i;
        if ((n >> i) & 1)
        {
            cout<<"1";
        }
        else cout<<"0";
        
    }
    return 0;
    
}

int main() {
int n;
cout<<"enter decimal number: ";
cin>>n;
cout<<"binary equiv: "<<DecToBinary(n);

return 0;
}

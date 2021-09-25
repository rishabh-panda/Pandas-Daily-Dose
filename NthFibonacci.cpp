#include<bits/stdc++.h>
using namespace std;

int nthfibo(int n)
{
    if (n<=1)
    {
        return n;
    }
    return nthfibo(n-1)+nthfibo(n-2);
}

int main() {
int n;
cout<<"enter terms: ";
cin>>n;
cout<<nthfibo(n);

return 0;
}

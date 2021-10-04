//Replace Zeroes (0) With Five (5) in a number input:

#include<bits/stdc++.h>
using namespace std;

int convertFive(int n)
    {
        if(n == 0)
          {return 5;}
        if(n%10 == n)
          {return n;}
        return (10*convertFive(n/10)+(n%10==0 ? 5 : n%10));
    }

int main() {
int n;
cin>>n; cout<<endl;
cout<<convertFive(n);
return 0;
}

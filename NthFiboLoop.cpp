#include<bits/stdc++.h>
using namespace std;

int nthfibo(int n)
{
 int element1 = 0;
 int element2 = 1;
 int sum;

 if (n == 0)
 {
    return element1;
 }
 for (int i = 2; i <= n; i++)
 {
    sum = element1 + element2;
    element1 = element2;
    element2 = sum;
 }
 
 return element2;
 
}

int main() {

int n;
cout<<"enter the fibo. term: ";
cin>>n;
cout<<nthfibo(n);

return 0;
}

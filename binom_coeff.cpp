#include<iostream>
using namespace std;

int factorial(int n) {
   int fact=1;
   for (int i = 2; i <= n ; i++)
   {
       fact*=i;
   }
   return fact;
}

int combination(int n, int r) {
    int nCr = factorial(n)/(factorial(n-r)*factorial(r));
    return nCr;
}

int main() {
int row;
cout<<"enter row number: ";
cin>>row;
for (int i = 0; i < row; i++)
{
    for (int j = 0; j <= i; j++)
    {
       cout<<combination(i,j)<<" ";
              
    }
      cout<<endl;  
}
    return 0;
}
#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num){
    for (int i = 2; i < sqrt(num); i++)
    {
        if (num%i == 0)
        {
            return false;
            break;
        }
        
    }
    return true;
    
}

int main() {
int n1, n2;
cout<<"enter num1: ";
cin>>n1;
cout<<"enter num2: ";
cin>>n2;

for (int i = n1; i <= n2; i++)
{
    if (isPrime(i))
    {
        cout<<i<<endl;
    }
       
}

return 0;
}
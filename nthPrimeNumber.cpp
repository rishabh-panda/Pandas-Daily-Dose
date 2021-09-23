//Computing the nth Prime Number

#include <bits/stdc++.h>
using namespace std;

int isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= pow(n,0.5); i++)
        if (n % i == 0)
            return 0;
    return 1;
        
}

NthPrime(int number) 
{
    int i, counter = 0;
    for(i = 2; ; i++) 
    {
        if(isPrime(i))
          counter++;
        if(counter == number) {
          return i;
          break;
    }
  }
}

int main()
{   int num;
    cout<<"enter number: ";
    cin>>num;
	cout<<"nth Prime: "<<NthPrime(num);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

//This program counts the number of primes present "BEFORE" a given number

int isPrime(int num)
    {
        if(num == 0 || num == 1)
            return 0;
        for(int i=2; i<=sqrt(num); i++)
        {
            if(num%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
    
    int countPrimes(int n) {
        int count=0;
        for(int i = 2; i < n; i++)
        {
            if(isPrime(i))
            {
                count++;
            }
        }
        return count;
    }

int main() {

int n;
cout<<"enter the limit: ";
cin>>n;
cout<<"number of primes before "<<n<<": "<<countPrimes(n);

return 0;
}

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;
 
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
        else return true;
}


void printPrime(int n)
{
    for (int i = 2; i <= n; i++) {
        if (isPrime(i))
            cout << i << " ";
    }
}

int main()
{   int num;
    cout<<"enter a number: ";
    cin>>num;
    printPrime(num);

	return 0;
}

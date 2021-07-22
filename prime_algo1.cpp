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

int main()
{   int num;
    cout<<"enter number: ";
    cin>>num;

	isPrime(num) ? cout<<" is prime\n" : cout<<" is composite\n";
	return 0;
}

#include<iostream>
using namespace std;

int sum;
void printNnatural(int n) {
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    cout<<sum;
}

int main() {
int num;
cout<<"enter number: ";
cin>>num;
printNnatural(num);
return 0;
}
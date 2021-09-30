#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int integer;
    long int longnum;
    char character;
    float floatnum;
    double doublenum;
    
    cin>>integer;
    cin>>longnum;
    cin>>character;
    cin>>floatnum;
    cin>>doublenum;
    
    cout<<integer<<endl;
    cout<<longnum<<endl;
    cout<<character<<endl;
    cout<<fixed<<setprecision(3)<<floatnum<<endl;
    cout<<fixed<<setprecision(9)<<doublenum;
    
    return 0;
}
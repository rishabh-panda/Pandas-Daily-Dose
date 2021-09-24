#include<iostream>
#include<math.h>
using namespace std;

void PythoGorean(int x, int y, int z) 
{
    //formul
    if (pow(x,2) + pow(y,2) == pow(z,2))
    {
        cout<<"Pythogorean Triplet";
    }
    else cout<<"Ooops! Not a PT";
    
}

int main() {
int a,b,c;
cout<<"enter values in descending order\n";
cout<<"first: ";
cin>>a;
cout<<"second: ";
cin>>b;
cout<<"third: ";
cin>>c;

PythoGorean(a,b,c);

return 0;
}

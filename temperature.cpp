#include<iostream>
using namespace std;

int main() {

//temperature variables
float c, f;

cout<<"Enter Temp. in Centigrade: ";
cin>>c;

//relation between C and F  
f = (1.8*c)+32;

//desired output
cout<<"Temperature (in deg. F): "<<f;

return 0;
}

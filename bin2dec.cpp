#include<bits/stdc++.h>
using namespace std;

int bin2dec(int BinNum) {
 int result = 0;
 int twos_powers = 1;
    while(BinNum>0)
    {
        int LastDigit = BinNum%10;
        result += LastDigit*twos_powers;
        twos_powers *= 2;
        BinNum /= 10;

    }
    return result;
}

int main() {
int Binary;
cout<<"enter binary num: ";
cin>>Binary;
cout<<"decimal equivalent: "<<bin2dec(Binary)<<endl;

return 0;
}
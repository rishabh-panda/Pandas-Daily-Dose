#include<bits/stdc++.h>
using namespace std;

int oct2dec(int BinNum) {
 int result = 0;
 int eight_powers = 1;
    while(BinNum>0)
    {
        int LastDigit = BinNum%10;
        result += LastDigit*twos_powers;
        twos_powers *= 8;
        BinNum /= 10;

    }
    return result;
}

int main() {
int num;
cout<<"enter octal num: ";
cin>>num;
cout<<"octal equivalent: "<<oct2dec(num)<<endl;

return 0;
}
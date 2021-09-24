#include<bits/stdc++.h>
using namespace std;

int HextoDec(string HexNum)
{
    #defining the base
    int PowersOfSixteen = pow(16,0);
    int HexNumLength = HexNum.length();
    int DecimalValue = 0;
    for (int i = HexNumLength-1; i >= 0; i--)
    {
        if (HexNum[i] >= '0' && HexNum[i] <= '9')
        {
            DecimalValue += (int(HexNum[i] - 48)*PowersOfSixteen);
            PowersOfSixteen *= 16;
        }

        else if (HexNum[i] >= 'A' && HexNum[i] <= 'E')
        {
            DecimalValue += (int(HexNum[i] - 55)*PowersOfSixteen);
            PowersOfSixteen *= 16; 
        }
        
        
    }
    
    return DecimalValue;
}

int main() {
string num;
cout<<"enter hex num: ";
cin>>num;
cout<<"decimal equivalent: "<<HextoDec(num);
return 0;
}

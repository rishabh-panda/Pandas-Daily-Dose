#include<bits/stdc++.h>
using namespace std;

int HextoDec(string HexNum)
{
    //defining the base
    int PowersOfSixteen = pow(16,0);
    
    //length of the hexadecimal string
    int HexNumLength = HexNum.length();
    
    //storage container variable
    int DecimalValue = 0;
    
    //considering each string element from
    //right to left side
    for (int i = HexNumLength-1; i >= 0; i--)
    {
        //when string element is a numeric hex value
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

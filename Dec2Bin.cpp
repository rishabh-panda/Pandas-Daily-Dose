// Using bitwise operator
#include<bits/stdc++.h>
using namespace std;

int DecToBinary(int n)
{
    //considering 8 bit number
    for (int i = 8; i > 0; i--)
    {
        n >> i;
        if ((n >> i) & 1)
        {
            cout<<"1";
        }
        else cout<<"0";
        
    }
    return 0;
    
}

int main() {
int n;
cout<<"enter decimal number: ";
cin>>n;
cout<<"binary equiv: "<<DecToBinary(n);

return 0;
}


// Using division method
// #include<bits/stdc++.h>
// using namespace std;

// string Dec2Binary(int n)
// {
//     string r;
//     while (n != 0){
//         r += ( n % 2 == 0 ? "0" : "1" );
//         n /= 2;
//     }
//     int i;
//     for (i=r.length()-1; i>=0; i--)
//     cout << r[i]; 
// }

// int main() {
// unsigned int n;
// cout<<"enter decimal number: ";
// cin>>n;
// cout<<"binary equiv: "<<Dec2Binary(n);

// return 0;
// }

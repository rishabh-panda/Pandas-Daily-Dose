#include<iostream>
using namespace std;

int main() {
int row;
int count = 1;
cin>>row;
for(int i=1; i<=row; i++){
    for (int j = 1; j <= row; j++)
    {
        if (i>=j)
        {
            cout<<count<<" "; count++;
        }
        else cout<<"  ";    
        
    }
    cout<<endl;
    
}
return 0;
}
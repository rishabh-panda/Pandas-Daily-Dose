#include<bits/stdc++.h>
using namespace std;

//Input: 2 5 9 3 1 10
//Output: 5 9 10 10 10 -1

int main() {
int A[]={2,5,9,3,1,10};
int n=sizeof(A)/sizeof(A[0]);

for (int i = 0; i < n; i++)
{
    int temp=-1;
    for (int j = i+1; j < n; j++)
    {
        if(A[j]>A[i])
        {
            temp = A[j];
            break;   
        }
    }
    cout<<temp<<" ";
    
}


return 0;
}

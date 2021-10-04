#include<bits/stdc++.h>
using namespace std;

int findSingle(int N, int arr[]){
        int result = 0;
        for(int i=0;i<N;i++)
        {
            result^=arr[i];
        }
        return result;
    }

int main() {
int arr[] = {2,2,5,7,8,3,7,8,3};
int n = sizeof(arr)/sizeof(arr[0]);
cout<<findSingle(n, arr);
return 0;
}

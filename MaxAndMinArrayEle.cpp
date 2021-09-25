#include<bits/stdc++.h>
using namespace std;

int main() {
int n;
cout<<"enter the array length: "; cin>>n;
int arr[n];

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

int greater = INT_MIN, smaller = INT_MAX;

for (int i = 0; i < n; i++)
{
    greater = max(greater, arr[i]);
    smaller = min(smaller, arr[i]);

}

cout<<greater<<" "<<smaller;
return 0;
}

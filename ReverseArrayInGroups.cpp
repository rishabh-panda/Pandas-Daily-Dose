#include<bits/stdc++.h>
using namespace std;

//Reverse in groups of give size K

//Input: 1 2 3 4 5 6 7 8 9 10 11
//K=3
//Output: 3 2 1 6 5 4 9 8 7 11 10

void Reverse(int A[],int n,int k)
{
	int l,r,i,temp;
	for(i=0;i<n;i=i+k)
	{
		l=i;
		if(i+k-1>n-1)
			r=n-1;
		else
			r=i+k-1;
		while(l<r)
		{
			temp=A[l];
			A[l]=A[r];
			A[r]=temp;
			l++;
			r--;
		}
	}
	
}


int main() {
int A[]={1,2,3,4,5,6,7,8,9,10,11};
int n=sizeof(A)/sizeof(A[0]);
int k=3;
Reverse(A,n,k);
for (int i = 0; i < n; i++)
{
    cout<<A[i]<<" ";
}
return 0;
}

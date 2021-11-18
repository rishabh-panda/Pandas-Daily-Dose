#include<bits/stdc++.h>
using namespace std;

int OnesComp(int n)
{
    //count the number of binary bits
int x = log2(n) + 1;
 
// Inverting the bits one by one 
  for (int i = 0; i < x; i++) 
       n ^= (1<<i);
    
    return n+1;
}

int main() {
cout<<OnesComp(44);
return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=sqrt(n);i++)//O(rot(N))
  {
    if(n%i==0)
    {
        cout<<i<<" "<<n/i<<endl;
    }
  }
  for(int i=1;i*i<=n;i++)//O(rot(N))
  {
    if(n%i==0)
    {
        cout<<i<<" "<<n/i<<endl;
    }
  }

    return 0;
}
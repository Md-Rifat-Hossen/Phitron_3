#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)//O(N)  total complexity O(Nlong(N))
  {
    int x=i;
    while(x>0)//O(long(N))
    {
        int digit=x%10;
        cout<<digit<<" ";
        x/10;
    }
    cout<<endl;
  }

    return 0;
}
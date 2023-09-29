#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n--)
  {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool sort=true;
   
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        sort=false;
        break;
        
    }
    if(sort)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
  }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int s;
  cin>>s;
  int a[n];
  int mn;
  
  
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
  

   
    for(int i=0;i<s-1;i++)
    {
        for(int j=i+1;j<s;i++)
        {
            int value=a[i]+a[j]+j-i;
            mn=min(mn,value);
        }
        cout<<mn;
    }
  
  cout<<mn;

    return 0;
}
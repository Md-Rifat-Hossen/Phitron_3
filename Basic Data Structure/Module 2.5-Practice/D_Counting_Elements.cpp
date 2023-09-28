#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int v[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v,v+n);
    int ctn=0;
    int r=0;
    int temp=0;
    for(int i=0;i<n;i++)
    {
       if(i==0)
       {
        temp=v[i];
        r=1;
       }
       else
       {
        if(temp==v[i])
        {
            r++;
        }
        else if(temp+1==v[i])
        {
            ctn+=r;
             temp=v[i];
             r=1;
        }
        else{
            r=1;
            temp=v[i];
        }
       }
    }
    cout<<ctn;

  

    return 0;
}
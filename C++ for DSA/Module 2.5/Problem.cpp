#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
  
  int *a=new int [n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int m;
  cin>>m;
  int*b=new int[m];
  for(int i=0;i<m;i++)
  {
    //b[i]=a[i];
    /* cin>>b[i]; */
    b[i]=a[i];
  }
  for(int i=m-n;i<m;i++)
  {
    //b[i]=a[i];
    cin>>b[i]; 
    //b[i]=a[i];
  }
  delete[] a;
    for(int i=0;i<m;i++)
  {
    cout<<b[i]<<" ";
  }
    return 0;
}
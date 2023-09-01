#include<bits/stdc++.h>
using namespace std;
int main()
{
  char s,q;
  int a,b,c;
  cin>>a>>s>>b>>q>>c;
  switch (s)
  {
  case '+':
  if(a+b==c)
  {
    cout<<"Yes";
  }else cout<< a+b;
  
    break;
     case '-':
  if(a-b==c)
  {
    cout<<"Yes";
  }else cout<< a-b;
  
    break;
     case '*':
  if(a*b==c)
  {
    cout<<"Yes";
  }else cout<< a*b;
  
    break;
  
  
  }

    return 0;
}
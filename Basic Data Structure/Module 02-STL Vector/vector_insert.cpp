#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v={1,2,3,4,5};
  vector<int>v1={101,102,103};
  v.insert(v.begin()+2,v1.begin(),v1.end());//koto index ainsert korte chacci abong ki insert korte chacci
  for(int a:v)
  {
    cout<<a<<" ";
  }

    return 0;
}
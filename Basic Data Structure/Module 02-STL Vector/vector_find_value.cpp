#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v={1,2,3,4,5,6,8,56,5,6,5};
//   vector<int>::iterator it;
  auto it=find(v.begin(),v.end(),7);
  if(it==v.end())
  {
    cout<<"Not found";
  }
  else cout<<"found";
//   cout<<*it;

    return 0;
}
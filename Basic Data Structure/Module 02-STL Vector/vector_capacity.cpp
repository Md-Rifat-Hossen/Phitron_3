#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v;                                                       
 // cout<< v.max_size()<<endl;
  //cout<<v.capacity()<<endl;
  v.push_back(10);
   // cout<<v.capacity()<<endl;
  v.push_back(20);
 // cout<<v.capacity()<<endl;
  v.push_back(20);
  //cout<<v.capacity()<<endl;
  //v.clear();
  v.resize(2);
  v.resize(3,30);
  v.resize(4,40);
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }
  // cout<<v[2];
    return 0;
}
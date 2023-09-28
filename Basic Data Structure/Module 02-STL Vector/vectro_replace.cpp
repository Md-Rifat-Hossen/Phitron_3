#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v={1,2,3,4,5,6,7,8,5,1,2,3,2};
  replace(v.begin(),v.end()-1,2,100);
  for(int c:v)
  {
    cout<<c<<" ";
  }

    return 0;
}
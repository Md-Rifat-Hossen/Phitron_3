#include<bits/stdc++.h>
using namespace std;
int main()
{
 /*  string s="MD Rifat Hossen";
  cout<<s.size()<<endl; */
  //cout<<s.max_size()<<endl;
//   string a;
//   cout<<a.capacity()<<endl;
// string s="Hello";
// cout<<s<<endl;
// s.clear();
// cout<<s<<endl;
// cout<<s.size();
// string s="hello";
// s.clear();
// // if(s.empty()==true)
// if(s.size()==0)
// {
//     cout<<"Empty";
// }
// else cout<<"No Emty";
    string s;
    cin>>s;
    s.resize(15,'A');
    cout<<s.size()<<endl;
    cout<<s<<endl;
    return 0;
}
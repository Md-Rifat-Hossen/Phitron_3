#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin,s);
  stringstream ss(s);
  string word;
  int ctn=0;
  while(ss>>word)
  {
    cout<<word<<endl;
    ctn++;
  }
  cout<<ctn;

    return 0;
}
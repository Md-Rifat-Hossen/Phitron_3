#include<bits/stdc++.h>
void fun(int* &p)
{
   // *p=20;
   p=NULL;

}
using namespace std;
int main()
{
  int val=10;
  int* p1=&val;
  fun(p1);
  cout<<p1;

    return 0;
}
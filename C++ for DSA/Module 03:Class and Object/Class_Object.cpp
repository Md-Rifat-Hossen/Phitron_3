#include<bits/stdc++.h>
using namespace std;
//syntex;
/* class student
{
    public:

}; */
class student
{
    public:
    char name[100];
    int roll;
    int cls;
    char senction;

};
int main()
{
    student s;
    s.roll=01;
    s.cls=20;
    s.senction='A';
    char mn[100]="Rahi";
    strcpy(s.name,mn);
   // s.name="Rahim";
   cout<<s.roll<<endl;
   cout<<s.cls<<endl;
   cout<<s.senction<<endl;
   cout<<s.name<<endl;
  

    return 0;
}
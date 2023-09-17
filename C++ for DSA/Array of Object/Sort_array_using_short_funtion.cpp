#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
    string name;
    int roll;
    int marks;
    // person(string name,int roll,int marks)
    // {
    //     this->marks=marks;
    //     this->name=name;
    //     this->roll=roll;
    // }  
};
bool cpm(person a,person b)
{
    if(a.marks>b.marks) return true;
    else return false;

}
int main()
{
    // int a[7];
    person a[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
        cin.ignore();
    }
  //shorting 

    sort(a,a+3,cpm);
    for(int i=0;i<3;i++)
    {
       cout<<a[i].name<<" "<<a[i].marks<<" "<<a[i].roll<<endl;
    }
  

    return 0;
}
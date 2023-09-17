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
    for(int i=0;i<3;i++)
    {
       cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
  

    return 0;
}
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
    person max;
    max.marks=INT_MIN;
    for(int i=0;i<3;i++)
    {
        if(a[i].marks>max.marks)
        max=a[i];
    }
    cout<<max.name<<" "<<max.roll<<" "<<max.marks<<endl;
    person min;
    min.marks=INT_MAX;
    for(int i=0;i<3;i++)
    {
        if(a[i].marks<min.marks)
        min=a[i];
    }
    cout<<min.name<<" "<<min.roll<<" "<<min.marks<<endl;
    

  

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
//contractor is function.it is a spacial type of function that name of class name same;
//this funtion always call autometically
class student
{
    public:
    string name;
    int roll;
    int cls;
    char senction;
    student(int r,int s,char sec,string na)
    {
        //cout<< "I am call automatically"<<endl;
        roll=r;
        cls=s;
        senction=sec;
        name=na;


        

    }

};
student fun()
{
    student rahim(29,1,'A',"Rahimullah");
    return rahim;
}
int main()
{
    student rahim=fun();
   cout<<rahim.roll<<endl;//ctrl+altr+down aray
   cout<<rahim.senction<<endl;
   cout<<rahim.cls<<endl;
   cout<<rahim.name<<endl;
  

    return 0;
}
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
int main()
{
   student rahim(29,1,'A',"Rahim ullah");
   student korim(79,1,'K',"Karim ullah");
   cout<<rahim.roll<<endl;//ctrl+altr+down aray
   cout<<rahim.senction<<endl;
   cout<<rahim.cls<<endl;
   cout<<rahim.name<<endl;
   cout<<korim.roll<<endl;
   cout<<korim.senction<<endl;
   cout<<korim.cls<<endl;
   cout<<korim.name<<endl;
  

    return 0;
}
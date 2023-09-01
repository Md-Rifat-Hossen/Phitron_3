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
/* student rahim(29,2,'a',"Rahm ullah"); */
student* rahim=new student (29,2,'a',"Rahm ullah");
//what ever you do first you must derefference 
//althouh this is a dynamic allocation mamemory so this first derefference.
//cout<< rahim->name<<endl;
(*rahim).roll=88;
/* cout<<(*rahim).name<<endl;
cout<<(*rahim).roll<<endl; */

//shurcut;
//arrow sing
//(*rahim).=rahim ->
cout<<rahim->cls<<endl;
//delete
delete rahim;

    return 0;
}
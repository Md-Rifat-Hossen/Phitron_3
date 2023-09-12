#include<bits/stdc++.h>
using namespace std;
class person
 {
    public:
    string name;
    int age;
    int sub1;
    int sub2;
    person(string nm,int ag,int s,int s1)
    {
        name=nm;
        age=ag;
        sub1=s;
        sub2=s1;
    }
    void diplay()
    {
        cout<<name<<endl;
        cout<<age<<endl;
    }
    int result()
    {
        return sub1+sub2;
    }
    
};
int main()
{
    person rifat("Hasan",33,50,89);
    //cout<<rifat.name;
    rifat.diplay();
    cout<<rifat.result()<<endl;

    return 0;
}
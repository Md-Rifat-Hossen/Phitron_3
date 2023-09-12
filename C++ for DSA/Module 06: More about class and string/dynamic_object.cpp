#include<bits/stdc++.h>
using namespace std;
class person

{
    public:
    string name;
    int age;
    person(string name,int age)
    {
        this->age=age;
        this->name=name;
    }
};
int main()
{
    person* rakib=new person("Rakib hasan",52);
    person* sakib=new person("sakib ahmed",85);
    rakib=sakib;
    //delete sakib;
    cout<<rakib->name<<endl;
    cout<<rakib->age<<endl;

    

  

    return 0;
}
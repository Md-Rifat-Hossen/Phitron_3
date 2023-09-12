#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
string name;
int age;
person(string name,int age)
{
    // name=m;
    // age=ag;
    // (*this).age=age;
    // (*this).name=name;
    this->age=age;
    this ->name=name;
}
};

int main()
{
    person rifat("Habibuer rahman",52);
    cout<<rifat.name;
  

    return 0;
}
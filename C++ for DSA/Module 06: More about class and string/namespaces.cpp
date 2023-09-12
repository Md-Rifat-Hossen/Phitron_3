#include<bits/stdc++.h>
using namespace std;
namespace rakib
{
    int age=52;
    void hello()
    {
        cout<<"Rakib namespaces"<<endl;
    }
    

}
namespace sakib
{
    int age2=56;
    void hello2()
    {
        cout<<"akib namepaces"<<endl;
    }
}
using namespace rakib;
using namespace sakib;
int main()
{
    // cout<< rakib::age<<endl;
    // cout<< sakib::age<<endl;
    cout<< age<<endl;
    cout<<age2;
    sakib::hello2();

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class dhoni
{   
    public:
    int no;
    string name;
    dhoni(int a,string b)
    {
        no=a;
        name=b;
    }

};
int main()
{
    //dhoni kohli(23,"India");
    
    dhoni* kohli=new dhoni(15,"India");
    cout<<kohli->no<<endl;
    cout<<kohli->name;

  

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;

    }

};
int main()
{
    node a(10);
    node b(20);
    //  a.val=10;
    //  b.val=20;
    //  a.next=&b;
    //  b.next=NULL;
    a.next=&b;

     cout<<a.val<<endl;
     //cout<<b.val<<endl;
     cout<<a.next->val<<endl;




  

    return 0;
}
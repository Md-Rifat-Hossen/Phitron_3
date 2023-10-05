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
void insert_at_tail(node* &head,int v)
{
    node* newnode=new node(v);
    if(head==NULL)
    {
        head=newnode;
        return;
    }

    node* tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    //temp ekhon last node a;
   tmp->next=newnode;
}
void print_linked_list(node* head)
{
    node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<"Your linked list: "<<endl;
        cout<<tmp->val;
        tmp=tmp->next;
    }

}
int main()
{
    node* head=NULL;
    while(true)
    {
         cout<<"Option 1:insert a value:"<<endl;
         cout<<"Option 2:print a value:"<<endl;
         cout<<".Option 3:Break a value:"<<endl;
    int op;
    cin>>op;
    if(op==1)
    {
        cout<< "Enter the value:";
        int n;
        cin>>n;
        insert_at_tail(head,n);
    }
    else if(op==2)
    {
         print_linked_list(head);
    }

    else if(op==3)
    {
         break;
    }

    }



    return 0;
}

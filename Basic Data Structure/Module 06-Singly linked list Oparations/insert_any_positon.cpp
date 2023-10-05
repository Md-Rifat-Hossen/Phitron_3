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
   cout<<endl<<"Insert at tail"<<endl<<endl;
}
void print_linked_list(node* head)
{
    node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<endl;
        cout<<"Your linked list: "<<endl;
        cout<<tmp->val;
        tmp=tmp->next;
    }
    cout<<endl<<endl;

}
void isert_at_position(node*head,int pos,int v)
{
    node*newnode=new node(v);
    node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    cout<<endl<<endl<<"Iserted at poss and value"<<pos<<v<<endl;

}
int main()
{
    node* head=NULL;
    while(true)
    {
         cout<<"Option 1:insert a value"<<endl;
         cout<<"Option 2:print a value"<<endl;
         cout<<"Option 3:insert any Possition"<<endl;
         cout<<"Option 4:break"<<endl;
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

    if(op==3)
    {
        cout<<"Enter the positon and value:";
        int pos,value;
        cin>>pos>>value;
        isert_at_position(head,pos,value);
    }

    else if(op==4)
    {
         break;
    }

    }



    return 0;
}

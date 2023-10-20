#include<bits/stdc++.h>
using namespace  std;
class node{
    public:
    int val;
    node*next;
    node(int val)
    {
    this->val=val;
    this->next=NULL;
    
    }





};
void inset_at_tail(node* &head,int val)
{
    node* newnode=new node(val);
    if(head==NULL)
    {
    head=newnode;
    cout << endl<<"Head Inserted" <<endl<< endl;
    return;
    }
    node* tmp=head;
    while(tmp->next!=NULL)
    {
    tmp=tmp->next;
    }
    tmp->next=newnode;

}
void print_linke_list(node* head)
{
    node*tmp=head;
    cout <<endl<< "Link list : " ;
    while(tmp!=NULL)
    {
    cout<<tmp->val<<" ";
    tmp=tmp->next;
    }
    cout << endl << endl;
}
void head_insert( node*&head,int val)
{
    node*newnode=new node(val);
    newnode->next=head;
    head=newnode;
    cout <<endl<< "Head Inserted" <<endl<< endl;
}
void insert_at_position(node*head,int pos,int val)
{
    node*newnode=new node(val);
    node*tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
    tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    cout <<endl<< "Positon inserted"<<endl << endl;
}
void delete_a_node(node*head,int pos)
{
    node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
    tmp=tmp->next;
    }
    node*deletenode=tmp->next;
    tmp->next=tmp->next->next;
    delete deletenode;
    cout <<endl<< "Node Deleted" <<endl<< endl;
}
void head_delete(node*&head)
{
    node* headdelete=head;
    head=head->next;
    cout<<endl<<endl<<"Head Deleted"<<endl<<endl;
}
int count_node(node*head)
{
    node*tmp=head;
    int ctn=0;
    while(tmp!=NULL)
    {
    ctn++;
    }
    cout <<endl<< "Total Node : "<<ctn<<endl << endl;
}
void reverse_print(node*n)
{
    //base case
   //use recursion
    if(n==NULL) return;
    reverse_print(n->next);
    cout <<endl<< n->val<<endl<< endl;
    
    
}
void link_list_shorting(node* head)
{
    for(node* i=head;i->next!=NULL;i=i->next)
    {
        for(node*j=i->next;j!=NULL;j=j->next)
        {
            if(i->val>j->val)
            {
              swap(i->val,j->val);
            }
        }
    }
    cout<<endl<<endl<<head->val<<endl<<endl;
}
int main()
{
    node* head=NULL;
    cout << "Enter the value" << endl;
    while(true)
    {
        int n;
        cin>>n;
        if(n==-1) break;
       inset_at_tail(head,n);
    }
    print_linke_list(head);
     






return 0;
}

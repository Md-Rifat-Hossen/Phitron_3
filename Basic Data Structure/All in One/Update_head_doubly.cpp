#include<bits/stdc++.h>
using namespace  std;
class node{
    public:
    int val;
    node*next;
    node*prev;
    node(int val)
    {
    this->val=val;
    this->next=NULL;
    this->prev=NULL;
    
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
    newnode->prev=tmp;

}
void print_doubly_link(node*head)
{
    node*tmp=head;
    while(tmp!=NULL)
    {
    cout << tmp->val << endl;
    tmp=tmp->next;
    }
}
void head_update (node* &head,int val)
{
    node*neawnode=new node(val);
   head->prev=neawnode;
    neawnode->next=head;
    head=neawnode;
     
    cout << endl<<"Head Updated"  <<endl<<endl;
}
int main()
{
    node* head=NULL;
    cout << "Enter the Value" << endl;
    while(true)
    {
    
    int val;
    cin>>val;
    if(val==-1) break;
    inset_at_tail(head,val);
    }
    while(true)
    {
        cout <<endl<< "1.print doubly" << endl;
        cout <<endl<< "2.Update the head value" << endl;
        cout << "What do you Choice?" << endl;
        int op;
        cin>>op;
        if(op==1)
        {
            print_doubly_link(head);
        }
        if(op==2)
        {
            cout << "Enter the value" << endl;
            int val;
            cin>>val;
            head_update(head,val);
            print_doubly_link(head);
        }
    }
    
    
    
return 0;
}
    
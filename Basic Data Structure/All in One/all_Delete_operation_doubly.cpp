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
void inset_at_tail(node* &head,node* &tail,int val)
{
    node* newnode=new node(val);
    if(head==NULL)
    {
    head=newnode;
    tail=newnode;
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
    cout <<endl<< "Tail Inserted"<<endl << endl;
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
void insert_at_position(node*head,int pos,int val)

{
    node*newnode=new node(val);
    node*tmp=head;
    for(int i=1;i<pos-1;i++)
    {
    tmp=tmp->next;
    if(head==NULL)
    cout << "Head is Empty"<< endl;
    return ;
    }
    if(tmp->next==NULL)
    {
        cout <<endl<< "Invalid Index" << endl<<endl; return;
    }
    newnode->prev=tmp;
    newnode->next=tmp->next;
    
    newnode->next->prev=newnode;
    tmp->next=newnode;
    cout << endl<<"Value insert at Position :"<<pos <<endl<< endl;
}
void delte_head(node*&head)
{
    node*tmp=head;
    node* deletenode=head;
    if(head==NULL)
    {
        cout<<endl << "Head is empty!"<<endl << endl;
        return;
    }
    
    head=head->next;
    head->prev=NULL;
    tmp->next=NULL;
    delete deletenode;
    cout <<endl<< "Head is deleted"<<endl << endl;
}
/*void tail_delete(node*head,node* &tail)

{
    node* tmp=tail;
    node* deletenode=tail;
    if(tail==NULL)
    {
    cout<<endl << "Tail is empty" <<endl <<endl; return;
    }
    tail->prev->next=NULL;
    tail=tail->next;
    delete deletenode;
    cout <<endl<< "tail is deleted" <<endl<< endl;

}*/
void delete_a_node(node*head,int pos)
{
    node*tmp=head;
    for(int i=0;i<pos-1;i++)
    {
    tmp=tmp->next;
    }
    node* deletenode=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp->next;
    tmp->prev->next=tmp->next;
    delete deletenode;
    cout << endl<<"Node is Deleted" <<endl<< endl;
}
int main()
{
    node* head=NULL;
    node* tail=NULL;
    cout << "Enter the Value" << endl;
    while(true)
    {
    
    int val;
    cin>>val;
    if(val==-1) break;
    inset_at_tail(head,tail,val);
    }
    while(true)
    {
        cout <<endl<< "1.print doubly" << endl;
        cout <<endl<< "2.Update the head value" << endl;
        cout <<endl<< "3.Insert At position" << endl;
        cout <<endl<< "4.Delete of head" << endl;
        //cout <<endl<< "5.Delete of tail" << endl;
        cout <<endl<< "6.Delete At position" << endl;
        
        cout << endl << endl;
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
        if (op==3)
        {
            cout << "Enter the position and value" << endl;
            int pos,val;
            
            cin>>pos>>val;
            if(pos==1)
            {
                head_update(head,val);
                print_doubly_link(head);
            }
            else
            {
            insert_at_position(head,pos,val);
            print_doubly_link(head);
            }
            
            
        }
        if(op==4)
        {
        delte_head(head);
        print_doubly_link(head);
        }/*
        if(op==5)
        {
            tail_delete(head,tail);
            print_doubly_link(head);
        }*/
        if(op==6)
        {
            int pos;
            cout <<endl<< "Enter the position " << endl;
            cin>>pos;
            if(pos==1)
            {
                delte_head(head);
                print_doubly_link(head);
            }
            else
            
            {
                delete_a_node(head,pos);
            print_doubly_link(head);
            }
            
        
        }
    }
    
    
    
return 0;
}
    
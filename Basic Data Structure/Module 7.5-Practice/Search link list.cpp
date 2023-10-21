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
    if(tmp==NULL)
    {
        cout<<endl << "Invalid  Index" <<endl<< endl;
        return ;
    }
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
    if(tmp==NULL)
    
    {
        cout<<endl << "Invalid Position " << endl<<endl;
        return;
    
    }
    }
    if(tmp->next==NULL)
    {
    cout <<endl<< "Invalid position  " <<endl<< endl;
    return;
    }
    node*deletenode=tmp->next;
    tmp->next=tmp->next->next;
    delete deletenode;
    cout <<endl<< "Node Deleted" <<endl<< endl;
}
void head_delete(node*&head)
{
    if(head==NULL)
    {
    cout << endl<<"Head is not available " <<endl<< endl;
    return;
    }
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
    tmp=tmp->next;
    }
    return ctn;
}
void reverse_print(node*n)
{
    //base case
   //use recursion
    if(n==NULL) return;
    reverse_print(n->next);
    cout <<endl<< n->val<<" ";
    cout << endl;
    
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
void search_list(node*head,int val)
{
    node*tmp=head;
    while(tmp!=NULL)
    {
        if(tmp->val==val)
        {
        cout <<endl<< "Value Is fouded: " <<val<< endl;
        }
        else
        cout << "Is not found: " << val<<endl;
        tmp=tmp->next;
        
    }
    cout <<endl << endl;
}
void maxi_min_val(node*head)
{
    
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
    while(1)
    {
    cout<<endl << "1.print link list" << endl;
    cout<<endl << "2.Head Insert" << endl;
    cout<<endl << "3.Head Delete" << endl;
    cout<<endl << "4.Insert Any position " << endl;
    cout<<endl << "5.Delete a node" << endl;
    cout<<endl << "6.Reverse print" << endl;
    cout<<endl << "7.Count Node" << endl;
    cout<<endl << "8.Shorting link list"<<endl;
    cout <<endl<< "9.Search Linked list" << endl;
    cout <<endl<< "10.Exit " <<endl<< endl;
    cout << "Enter The Option what do you want?" << endl;
    int op;
    cin>>op;
    if(op==1)
    {
    print_linke_list(head);
    }
    if (op==2)
    {
        cout <<endl <<endl<<"Enter the value" << endl;
        int n;
        cin >> n;
        head_insert(head,n);
        print_linke_list(head);
    }
    if(op==3)
    {
        head_delete(head);
         print_linke_list(head);
    }
    if(op==4)
    {
        cout <<endl<< "Enter the position and value" << endl;
        int pos,val;
        cin >> pos>>val;
        if(pos==0)
        {
            head_insert(head,val);
            print_linke_list(head);
        }
        else
        {
        
        insert_at_position(head,pos,val);
        print_linke_list(head);
        }
    }
    if(op==5)
    {
        cout <<endl<< "Enter a position what do you want?" << endl;
        int pos;
        cin>>pos;
        if ( pos==0)
        {
            head_delete(head);
             print_linke_list(head);
        }
        else
        {
        
        delete_a_node(head,pos);
         print_linke_list(head);
        }
    }
    if(op==6)
    {
        reverse_print(head);
         print_linke_list(head);
    }
    if(op==7)
    {
        
        int n=count_node(head);
         cout <<  n<< endl;
    }
    if(op==8)
    {
    print_linke_list(head);
    link_list_shorting(head);
    print_linke_list(head);
    
    }
    
     
    
    
    if(op==9)
    {
    cout << "Enter the searching value" << endl;
    int n;
    cin>>n;
    search_list(head,n);
    print_linke_list(head);
    
    }
    if(op==10)
    {
    
    
    break;
    }
    }
    
     






return 0;
}
    
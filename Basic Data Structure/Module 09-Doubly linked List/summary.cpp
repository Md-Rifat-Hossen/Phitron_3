#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node *prev;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
// Normal Print
void print_normal(node *head)
{
    node *tmp = head;
    while (tmp != NULL)

    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
// Reverse Print
void print_revese(node *tail)
{
    node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
}
// Insert at Possition
void insert_at_position(node *head, int pos, int val)
{
    node *newnode = new node(val);
    node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    newnode->next->prev = newnode;
    newnode->prev = tmp;
}
// Insert at Head
void insert_at_head(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}
// Insert at Tail
void insert_at_tail(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    if (tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = tail->next;
}
// Count of Node
int size(node *head)
{
    node *tmp = head;
    int ctn = 0;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        ctn++;
    }
    return ctn;
}
// Delete at Position
void delete_at_position(node *head, int pos)
{
    node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    node *deletenode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deletenode;
}
// Delete at Head
void delete_at_head(node *&head)
{
    node *deletenode = head;
    head = head->next;
    delete deletenode;
    head->prev = NULL;
}
// Delete at tail
void delete_at_tail(node *&tail)
{
    node *deletenode = tail;
    tail = tail->prev;
    delete deletenode;
    tail->next = NULL;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    // node *head = new node(10);
    // node *a = new node(20);
    // node *b = new node(30);
    // node *c = new node(40);
    // node *tail = c;
    // head->next = a;
    // a->prev = head;
    // a->next = b;
    // b->prev = a;
    // b->next = c;
    // c->prev = b;
    int pos, val;
    // delete_at_tail(tail);
    //  delete_at_head(head);
    cin >> pos;
    //  delete_at_position(head, pos);
    if (pos >= size(head))
    {
        cout << "Invalite Index" << endl;
    }
    else if (pos == 0)
    {
        delete_at_head(head);
    }
    else if (pos == size(head) - 1)
    {
        delete_at_tail(tail);
    }
    else
    {
        delete_at_position(head, pos);
    }

    //   cin >> val;
    //   //
    //   // insert_at_head(head,tail,val);
    //   if (pos == 0)
    //   {
    //       insert_at_head(head, tail, val);
    //   }
    //   else if (pos == size(head))
    //   {
    //       insert_at_tail(head, tail, val);
    //   }
    //   else if (pos > size(head))
    //   {
    //       cout << "Invalite Index" << endl;
    //   }
    //   else
    //   {
    //       insert_at_position(head, pos, val);
    //   }

    print_normal(head);
    print_revese(tail);

    return 0;
}
// prothome je node ta asbe seta r next a oi position ar next er node lagate hobe
// secound a je node asbe oi node tar prev a a oi pisition ar next jokto korte hobe;
// tar topre jekono tar prev lagao dont matter;
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
void print_normal(node *head) // time complexity O(n)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(node *tail) // time complexity O(n)
{
    node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
}
void insert_at_postion(node *head, int pos, int val) // time complexity O(n)
{
    node *newnode = new node(val);
    node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;     // 100->30
    tmp->next = newnode;           // 20->100
    newnode->next->prev = newnode; // 30<-100
    newnode->prev = tmp;           // 20<-100
}
int size(node *head) // time complexity O(n)
{
    node *tmp = head;
    int ctn = 0;
    while (tmp != NULL)
    {
        ctn++;
        tmp = tmp->next;
    }
    return ctn;
}
void insert_head(node *&head, node *&tail, int val) // time complexity O(1)
{
    node *newnode = new node(val);
    // kintu ase if head null hoy tobe insert korbe koi;
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    else
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
}
void insert_tail(node *&head, node *&tail, int val) // time complexity O(1)
{
    node *newnode = new node(val);
    // suru te tail and head null so when tail come this sextion so tail updatee
    if (tail == NULL)
    {
        // insert head ke call koro
        // insert_head(head, val);
        // tail = newnode;
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = tail->next;
}
int main()
{
    // node *head = NULL;
    // node *tail = NULL;
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *tail = c;
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    int pos, val;
    cin >> pos >> val;
    // insert_tail(head, tail, val);
    if (pos == 0)
    {
        insert_head(head, tail, val);
    }
    else if (pos == size(head))
    {
        insert_tail(head, tail, val);
    }
    else if (pos > size(head))
    {
        cout << "Invaliat Index" << endl;
    }
    else if (pos >= size(head))
    {
        cout << "Invalid Position" << endl;
    }

    else
    {
        insert_at_postion(head, pos, val);
    }
    print_normal(head);
    print_reverse(tail);

    return 0;
}
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
void delet_at_position(node *head, int pos) // Complexity O(n)
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
void delete_tail(node *&tail) // Complexity O(1)
{
    node *deletenode = tail;
    tail = tail->prev;
    delete deletenode;
    tail->next = NULL;
}
void delete_head(node *&head) // Complexity O(1)
{
    node *deletenode = head;
    head = head->next;
    delete deletenode;
    head->prev = NULL;
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
    int pos;
    cin >> pos;
    if (pos >= size(head))
    {
        cout << "Invalid Index" << endl;
    }
    else if (pos == 0)

    {
        delete_head(head);
    }

    else if (pos == size(head) - 1)
    {
        delete_tail(tail);
    }
    else
    {
        delet_at_position(head, pos);
    }

    print_normal(head);
    print_reverse(tail);

    return 0;
}
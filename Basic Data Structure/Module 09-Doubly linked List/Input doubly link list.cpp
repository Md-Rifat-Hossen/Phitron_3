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
void print_reverse(node *tail)
{
    node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
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
    node *head = NULL;
    node *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    print_normal(head);
    print_reverse(tail);

    return 0;
}
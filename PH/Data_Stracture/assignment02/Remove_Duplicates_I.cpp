#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void input_linkList(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linkList(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}
void sort_linkList(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value > j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
}
void duplicates(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *tmp = head;
    while (tmp != NULL && tmp->next != NULL)
    {
        if (tmp->value == tmp->next->value)
        {
            Node *duplicate = tmp->next;
            tmp->next = duplicate->next;
            delete duplicate;
        }
        else
        {
            tmp = tmp->next;
        }
    }
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        input_linkList(head, tail, val);
    }

    sort_linkList(head);
    duplicates(head);
    print_linkList(head);
    return 0;
}
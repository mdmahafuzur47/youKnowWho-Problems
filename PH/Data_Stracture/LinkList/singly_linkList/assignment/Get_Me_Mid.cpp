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
void sort_linkList(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value < j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
}
int size(Node *head)
{
    Node *tmp = head;

    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
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
void middle_element(Node *head)
{
    int len = size(head);

    if (len % 2 == 0)
    {
        for (int i = 1; i < len / 2; i++)
        {
            head = head->next;
        }
        cout << head->value << " " << head->next->value << endl;
    }
    else
    {
        for (int i = 1; i <= len / 2; i++)
        {
            head = head->next;
        }
        cout << head->value << endl;
    }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        input_linkList(head, tail, value);
    }
    sort_linkList(head);
    middle_element(head);
    return 0;
}
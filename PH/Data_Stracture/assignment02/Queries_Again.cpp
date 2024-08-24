#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
void input_head_linkList(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void input_pos_linkList(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 0; i < pos; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->prev = tmp;
}

void input_tail_linkList(Node *&tail, Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
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
int size(Node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
    }
    return cnt;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int i;
    cin >> i;
    while (i--)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos == 0)
        {
            input_head_linkList(head, tail, val);
        }
        else if (pos < size(head))
        {
            // input_pos_linkList(head, pos, val);
        }
        else if (pos == size(head))
        {
            input_tail_linkList(tail, head, val);
        }
        print_linkList(head);
    }

    return 0;
}
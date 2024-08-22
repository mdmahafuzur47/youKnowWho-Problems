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
void input_doubly_linkList(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
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
        head = head->next;
    }
    return cnt;
}
bool same_same(Node *head1, Node *head2)
{
    while (head1 != NULL)
    {
        if (head1->value != head2->value)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return true;
}
int main()
{

    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;

    int value1;
    while (true)
    {
        cin >> value1;
        if (value1 == -1)
        {
            break;
        }
        input_doubly_linkList(head1, tail1, value1);
    }
    // print_linkList(head1);
    int value2;
    while (true)
    {
        cin >> value2;
        if (value2 == -1)
        {
            break;
        }
        input_doubly_linkList(head2, tail2, value2);
    }
    // print_linkList(head2);
    int len1 = size(head1);
    int len2 = size(head2);
    // cout << len1 << " " << len2 << endl;

    if (len1 != len2)
    {
        cout << "NO" << endl;
        return 0;
    }

    bool flag = same_same(head1, head2);
    (flag) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}
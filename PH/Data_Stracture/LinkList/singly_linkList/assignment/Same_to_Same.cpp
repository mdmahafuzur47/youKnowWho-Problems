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
bool same_same(Node *head1, Node *head2, int len)
{
    for (int i = 0; i < len; i++)
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

void print_linkList(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int value1;
    while (true)
    {
        cin >> value1;
        if (value1 == -1)
            break;
        input_linkList(head1, tail1, value1);
    }
    // print_linkList(head1);
    int value2;
    while (true)
    {
        cin >> value2;
        if (value2 == -1)
            break;
        input_linkList(head2, tail2, value2);
    }
    // print_linkList(head2);
    // cout << size(head1) << size(head2) << endl;

    if (size(head1) != size(head2))
    {
        cout << "NO" << endl;
    }
    else
    {
        bool flag = same_same(head1, head2, size(head1));
        (flag) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}
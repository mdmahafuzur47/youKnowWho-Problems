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
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int length_linkList(Node *head)
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
        {
            break;
        }
        input_linkList(head1, tail1, value1);
    }
    // print_linkList(head1);
    int len1 = length_linkList(head1);
    int value2;
    while (true)
    {
        cin >> value2;
        if (value2 == -1)
            break;
        input_linkList(head2, tail2, value2);
    }
    // print_linkList(head2);
    int len2 = length_linkList(head2);

    // cout << len1 << " " << len2 << endl;
    (len1 == len2) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}
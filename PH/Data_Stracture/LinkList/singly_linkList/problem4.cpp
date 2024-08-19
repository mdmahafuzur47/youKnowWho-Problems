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
void input_linkList(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void printLinkList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_any_position(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;
        printLinkList(head);
        return;
    }
    Node *temp = head;
    for (int i = 0; i < pos-1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "INVALID" << endl;
            return;
        }
    }
    if (temp == NULL)
    {
        cout << "INVALID" << endl;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;

    printLinkList(head);
}

int main()
{

    Node *head = NULL;

    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        input_linkList(head, value);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int pos, value;
        cin >> pos >> value;

        insert_any_position(head, pos, value);
    }

    return 0;
}
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

void insert_in_tail(Node *&head, int value)
{
    Node *newNode = new Node(value);
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
int linkListLength(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;

        temp = temp->next;
    }
    return cnt;
}
int main()
{
    Node *head = NULL;
    int value;
    while (true)
    {
        cin >> value;
        if(value == -1){
            break;
        }
        insert_in_tail(head, value);
    }
    printLinkList(head);

    int length = linkListLength(head);
    cout << length << endl;

    return 0;
}
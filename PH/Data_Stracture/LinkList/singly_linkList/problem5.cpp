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

void input_LinkList(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
bool sort_linkList(Node *head){
    Node *tmp = head;
    if(head == NULL) return false;
    while (tmp->next != NULL)
    {
        if(tmp->value > tmp->next->value){
            return false;
        }
        tmp= tmp->next;
    }
    return true;
}
int main()
{

    Node *head = NULL;
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        input_LinkList(head, value);
    }
   

    (sort_linkList(head)) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}
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

void head_insert(Node *&head, Node *&tail, int val)
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
void tail_insert(Node *&head, Node *&tail, int val)
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

void insert_at_pos(Node *head,int pos, int val){
    Node *newNode = new Node(val);
    for(int i=1; i<=pos-1; i++){
        head = head->next;
    }
    newNode->next = head->next;
    head->next = newNode;
    newNode->prev = head;
    newNode->next->prev = newNode;
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

    Node *head = NULL;
    Node *tail = NULL;

    int t;
    cin >> t;
    while (t--)
    {
        int len = size(head);
        int pos, val;
        cin >> pos >> val;
        if (pos == 0)
        {
            head_insert(head, tail, val);
        }else if(pos == len){
            tail_insert(head,tail,val);
        }else if(pos > len){
            cout<<"Invalid"<<endl;
        }else{
            insert_at_pos(head,pos,val);
        }
        print_linkList(head);
    }

    return 0;
}
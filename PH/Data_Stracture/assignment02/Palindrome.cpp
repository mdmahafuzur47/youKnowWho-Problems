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
void palindrome(Node *&head,Node *cur){
    if(cur->next==NULL){
        head = cur;
        return;
    }
    palindrome(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val == -1) break;
        input_linkList(head,tail,val);
    }
    print_linkList(head);
    Node *reverseHead = head;
    Node *cur=head;
    palindrome(reverseHead,cur);
    
    return 0;
}
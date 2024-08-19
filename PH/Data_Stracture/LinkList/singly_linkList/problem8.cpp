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
int size(Node* head){
    int cnt=0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
    
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
    int max = head->value;
    for(Node* i=head; i != NULL; i = i->next){
        if(i->value > max){
            max = i->value;
        }
    }
    cout<<max<<endl;
    return 0;
}
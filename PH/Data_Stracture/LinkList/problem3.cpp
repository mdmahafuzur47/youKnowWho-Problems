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

int length_linkList(Node *head)
{
    Node *temp = head;
    int cnt=0;
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
        if (value == -1)
            break;
        input_linkList(head, value);
    }
    int len = length_linkList(head);

    Node *tmp = head;
    cout << len << endl;
    if(len % 2 == 0){
        for(int i=0; i<len/2-1; i++){
            tmp=tmp->next;
        }   
        cout<<tmp->value<<" "<<tmp->next->value<<endl;
    }else{
        for(int i=0; i<len/2; i++){
            tmp=tmp->next;
        }
        cout<<tmp->value<<endl;
    }

    return 0;
}
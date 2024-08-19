#include <bits/stdc++.h>
using namespace std;
class Node {
    public: 
        int val;
        Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void input_head_tail(Node *&head,Node*&tail,int pos,int val){
    Node * newNode = new Node(val);
    if(head ==NULL) {
        head=newNode;
        tail = newNode;
    }
    if(pos==0){
        head->next = newNode;
        head = newNode;
        
    }else{
        
    }

}

int main() {
    Node *head =NULL;
    Node *tail =NULL;
    int t;
    cin>>t;
    while (t--)
    {
        int pos,val;
        cin>>pos>>val;
        input_head_tail(head,tail,pos,val);
    }
        

    return 0;
}
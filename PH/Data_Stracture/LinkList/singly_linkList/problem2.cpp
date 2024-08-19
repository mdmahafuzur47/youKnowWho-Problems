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

bool check_Duplicate(Node *head, int len)
{
    Node *tmp = head;
    vector<int> frq(100, 0);
    for (int i = 0; i < len; i++)
    {
        frq[tmp->value]++;
        tmp = tmp->next;
    }
    for (int i = 0; i <= 100; i++)
    {
        if (frq[i] > 1)
        {
            return true;
        }
    }
    return false;
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

    int len = length_linkList(head);

    bool flag = check_Duplicate(head, len);

    (flag) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}
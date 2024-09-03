#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}
void leaf_max_min(Node *root)
{
    vector<int> v;

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        if (p->left == NULL && p->right == NULL)
        {
            v.push_back(p->value);
        }

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    auto max = max_element(v.begin(), v.end());
    auto min = min_element(v.begin(), v.end());
    cout << *max << " " << *min << endl;
}

int main()
{

    Node *root = input_tree();
    leaf_max_min(root);

    return 0;
}
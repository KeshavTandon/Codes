#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node*left;
    struct Node*right;
    Node(int val)
    {
        data=val;
        left=right=nullptr;
    }
};

void preOrder(struct Node*node)
{
    if(node==NULL)
    return;

    cout << node->data << " ";
    preOrder(node->left);
    preOrder(node->right);
}

void inOrder(struct Node*node)
{
    if(node==NULL) return;
    inOrder(node->left);
    cout << node->data << " ";
    inOrder(node->right);
}

void postOrder(struct Node*node)
{
    if(node==NULL) return;
    postOrder(node->left);
    postOrder(node->right);
    cout << node->data << " ";
}

int main()
{
    struct Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(4);
    preOrder(root);
    cout << endl;
    inOrder(root);
    cout << endl;
    postOrder(root);
}
#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node *left, *right;

    node(int val=11){
        left=NULL;
        right=NULL;
        data=val;
    }
};

void postOrderTrav(node *curr, vector<int> &postOrder)
{
    if (curr == NULL)
        return;

    postOrderTrav(curr->left, postOrder);
    postOrderTrav(curr->right, postOrder);
    postOrder.push_back(curr->data);
}

// node *newNode(int data)
// {
//     node *node = (struct node *)malloc(sizeof(struct node));
//     node->data = data;
//     node->left = NULL;
//     node->right = NULL;

//     return (node);
// }

int main()
{

    // struct node *root = newNode(1); 
    struct node *root = new node(12);
    
    root->left = new node;
    root->right = new node;
    root->left->left = new node();
    root->left->right = new node;
    root->left->right->left = new node;
    root->right->left = new node;
    root->right->right = new node;
    root->right->right->left = new node;
    root->right->right->right = new node;

    vector<int> postOrder;
    postOrderTrav(root, postOrder);

    cout << "The postOrder Traversal is : ";
    for (int i = 0; i < postOrder.size(); i++)
    {
        cout << postOrder[i] << " ";
    }
    return 0;
}
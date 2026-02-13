# include <iostream>
using namespace std;

struct node{
    int data;
    struct node * left;
    struct node * right;

};

//this function is used to traverse the tree in pre-order manner
void preorder(struct node * root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data ;
    preorder(root->left);
    preorder(root->right);
}

// time complexity is O(n) where n is the number of nodes in the tree
// space complexity is O(h) where h is the height of the tree
// therefore for the worst case the space complexity is O(n) where n is the number of nodes in the tree

// inorder traversal follows the (left, root, right)
// pre-order traversal follows the (root, left, right)
// post-order traversal follows the (left, right, root)

// every time we foloow the traversal oreder we reach to a subtree , and at that 
// point again the traversal order is followed and we reach to a subtree and so 
//on until we reach to the leaf node and then we backtrack and follow the traversal
// order again and so on until we reach to the root node again

void inorder(struct node * root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data;
    inorder(root->right);
}

void postorder(struct node * root)
{
    if(root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data;
}
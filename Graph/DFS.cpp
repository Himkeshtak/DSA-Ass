# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

struct Treenode{
    int val;
    Treenode *left;
    Treenode *right;
    Treenode(int x): val(x) , left(nullptr) , right(nullptr) {}
};

int max_depth(Treenode *root)
{
    if(root == nullptr)
    {
        return 0;
    }
    int left_depth = max_depth(root->left);
    int right_depth = max_depth(root->right);
    return 1 + max(left_depth , right_depth);
}

int main()
{
    Treenode * root = new Treenode(1);
    root->left = new Treenode(2);
    root->right = new Treenode(3);
    return 0;
}
# include <iostream>
using namespace std;

struct TreeNode{
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode() : val(0), left(nullptr), right(nullptr){}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int findceil(TreeNode* root, int key)
{
    int ceil = -1;
    while(root){
        if(root->val == key ){
            ceil = root->val;
            return ceil;
        }
        if(root->val < key)
        {
            root = root->right;
        }
        else
        {
            ceil = root->val;
            root = root->left;
        }
    }
    return ceil;
}

// ceil the val , which is greater than or equal to the key, if there is no ceil then return -1;
// 
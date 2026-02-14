// the logic here is only that if you get a value fdo traversal and got to thd relvant place 
// all while following the rules of the BST and then insert the node where leaf node comes
// means the left and right becomes NULL

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

class Solution{
    public:
            TreeNode* insert_node_BST(TreeNode* root, int val)
            {
                if (root == NULL) return new TreeNode(val); /// if the root is nNULL meanas the tree is empty
                TreeNode * cur = root;
                while(true)
                {
                    if(cur->val <= val)
                    {
                        if(cur->right == NULL)
                        {
                            cur = cur->right;
                        }
                        else
                        {
                            cur->right = new TreeNode(val);
                            break;
                        }
                    }
                    else{
                        if(cur->left == NULL)
                        {
                            cur = cur->left;
                        }
                        else{
                            cur->left = new TreeNode(val);
                            break;
                        }
                    }
                }
                return root;
            }
};
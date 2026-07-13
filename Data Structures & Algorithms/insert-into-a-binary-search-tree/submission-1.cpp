/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == nullptr)
            return new TreeNode(val);
        
        TreeNode* i = root;
        while(i != nullptr)
        {
            if( val > i->val )
            {
                if(i->right != nullptr)
                    i = i->right;
                else
                    break;
            }
            else if( val < i->val )
            {
                if(i->left != nullptr)
                    i = i->left;
                else
                    break;
            }
        }

        if(val > i->val)
            i->right = new TreeNode(val);
        else
            i->left = new TreeNode(val);

        return root;
    }
};
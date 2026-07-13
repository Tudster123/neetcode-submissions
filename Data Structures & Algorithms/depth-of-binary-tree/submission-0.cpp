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
    int m_maxDepth = 0;

    void traverseTree(TreeNode* root, int currDepth = 1)
    {
        if(root == nullptr)
            return;

        if(root->left != nullptr)
            traverseTree(root->left, currDepth+1);
        if(root->right != nullptr)
            traverseTree(root->right, currDepth+1);
        
        if(m_maxDepth < currDepth)
            m_maxDepth = currDepth;

        return;
    }

    int maxDepth(TreeNode* root) {
       traverseTree(root);

       return m_maxDepth;
    }
};

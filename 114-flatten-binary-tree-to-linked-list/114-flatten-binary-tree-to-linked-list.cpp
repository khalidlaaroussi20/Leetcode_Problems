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
    TreeNode* flatten_helper(TreeNode* root) 
    {
        if (root == NULL)
            return (NULL);
        TreeNode* left = flatten_helper(root->left);
        TreeNode* right = flatten_helper(root->right);
        if (left)
        {
            left->right = root ->right;
            root ->right = root->left;
            root ->left = NULL;
        }
        TreeNode* return_node = NULL;
        if (right)
            return_node = right;
        else if (left)
            return_node = left;
        else
            return_node = root;
        return (return_node);
    }
    void flatten(TreeNode* root) {
        root = flatten_helper(root);
    }
};
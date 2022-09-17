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
    bool isValidBST(TreeNode* root) 
    {
        return (validBST(root, NULL, NULL));
    }
    
    bool validBST(TreeNode* root, int* min, int* max)
    {
        if (root == NULL)
            return (true);
        if ((min && root ->val <= *min) || (max && root -> val >= *max))
                return (false);
        return (validBST(root ->left, min,&root->val) && 
                validBST(root ->right, &root->val, max)
               );
    }
};
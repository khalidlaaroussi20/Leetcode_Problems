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
    int kthSmallest(TreeNode* root, int k) {
        return (smallest(root, k));
    }
    
    int smallest(TreeNode* root, int &k)
    {
        if (root == NULL)
            return (0);
        if (k == 0)
            return (root->val);
        int smallestLeft = smallest(root->left, k);
        k--;
         if (k == 0)
            return (root->val);
        if (smallestLeft)
            return (smallestLeft);
        int smallestRight = smallest(root ->right, k);
        if (smallestRight)
            return (smallestRight);
        return (0);
    }
};
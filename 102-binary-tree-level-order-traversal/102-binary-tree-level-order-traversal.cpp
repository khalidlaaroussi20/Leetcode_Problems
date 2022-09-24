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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> all_levels;
        if (!root)
            return (all_levels);
        queue <TreeNode*> q;
        q.push(root);
        while (!q.empty())
        {
            int len_level = q.size();
            vector<int> curr_level;
            for (int i = 0; i < len_level;i++)
            {
                TreeNode* front = q.front();
                q.pop();
                curr_level.push_back(front -> val);
                if (front ->left)
                    q.push(front->left);
                if (front ->right)
                    q.push(front->right);
            }
            all_levels.push_back(curr_level);
        }
        return (all_levels);
    }
};
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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) 
    {
        if (depth == 1)
        {
            TreeNode *node = new TreeNode(val);
            node->left = root;
            root = node;
        }
        else
        {
            queue <TreeNode *> q;
            int level = 1;
            q.push(root);
            while (!q.empty())
            {
                if (level + 1 == depth)
                {
                    while (!q.empty())
                    {
                        TreeNode* front = q.front();
                        TreeNode *tmpLeft = front ->left;
                        TreeNode *tmpRight = front ->right;
                        front ->left = new TreeNode(val);
                        front ->left ->left = tmpLeft;
                        front ->right = new TreeNode(val);
                        front ->right ->right = tmpRight;
                        q.pop();
                    }
                }
                else
                {
                    int size = q.size();
                    for (int i = 0; i < size;i++)
                    {
                        TreeNode* front = q.front();
                        if (front ->right)
                            q.push(front ->right);
                         if (front ->left)
                            q.push(front ->left);
                        q.pop();
                    }
                }
                level++;
            }
        }
        return (root);
    }
};
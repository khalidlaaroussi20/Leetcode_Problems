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
    int ans = 0;
    int pseudoPalindromicPaths (TreeNode* root) {
        vector <int> countDigits(11,0);
        dfs(root, countDigits);
        return (ans);
        
    }
    void dfs(TreeNode* root, vector <int> countDigits)
    {
        if (root == NULL)
            return ;
        countDigits[root ->val]++;
        if (root ->left == NULL && root ->right == NULL)
        {
            if (isPalindrom(countDigits))
                ans++;
        }
        else
        {
            dfs(root ->left, countDigits);
            dfs(root ->right, countDigits);
        }
    }
    bool isPalindrom(vector <int> &countDigits)
    {
        int odd = 0;
        for (int i = 1; i <= 9 ;i++)
        {
            if (countDigits[i] % 2)
                odd++;
        }
        if (odd > 1)
            return (false);
        return (true);
    }
};
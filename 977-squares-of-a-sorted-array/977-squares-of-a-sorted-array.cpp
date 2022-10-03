class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0, j = nums.size() - 1, idx = nums.size() - 1;
        vector <int> ans(nums.size());
        while (i <= j)
        {
            if (abs(nums[i]) >= abs(nums[j]))
                ans[idx] = pow(nums[i++],2);
            else
                 ans[idx] = pow(nums[j--],2);
            idx--;
        }
        return (ans);
    }
};
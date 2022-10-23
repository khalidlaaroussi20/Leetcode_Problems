class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector <int> count(n + 1, 0);
        for (int i = 0; i < nums.size(); i++)
        {
            count[nums[i]]++;
        }
        vector <int> ans(2);
        int nb;
        for (int i = 1; i <= nums.size(); i++)
        {
            if (count[i] == 2)
            {
                ans[0] = i;
            }
            else if (!count[i])
                nb = i;
        }
        ans[1] = nb;
        return (ans);
    }
};
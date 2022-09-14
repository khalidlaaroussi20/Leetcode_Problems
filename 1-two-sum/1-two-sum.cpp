class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector <int> ans;
        map <int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            int targetVal = target - nums[i];
            if (m.find(targetVal) != m.end())
            {
                ans.push_back(m[targetVal]);
                ans.push_back(i);
                break ;
            }
            m[nums[i]] = i;
        }
        return (ans);
    }
};
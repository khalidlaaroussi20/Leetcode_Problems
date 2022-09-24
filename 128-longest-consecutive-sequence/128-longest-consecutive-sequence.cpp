class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if (nums.size() == 0)
                return (0);
        set<int> s;
        for (int i = 0; i < nums.size();i++)
            s.insert(nums[i]);
        int max_len = 0, prev = 0,left = 0, right = 0;
        for (auto itr = s.begin(); itr != s.end(); itr++)
        {
            //printf("prev= %d cur = %d left = %d right = %d\n",prev, *itr,left, right);
            if (*itr != prev + 1)
            {
                max_len = max(max_len, right  - left);
                left = right;
            }
            prev = *itr;
            right++;
        }
        max_len = max(max_len, right  - left);
        return (max_len);
    }
};
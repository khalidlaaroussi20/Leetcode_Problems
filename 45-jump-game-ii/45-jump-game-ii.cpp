class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size() == 1 || nums[0] == 0)
            return (0);
        int maxNew = nums[0], currMax = nums[0], ans = 1;
        if (maxNew >= nums.size() - 1)
            return (1);
        for (int i = 0; i < nums.size(); i++)
        {
            if (currMax <= nums[i])
                currMax = nums[i];
            else
                currMax--;
            //printf("max = %d curMax = %d i = %d\n", maxNew, currMax, i);
            if (maxNew == 0 && i != nums.size() - 1)
            {
                if (currMax == 0)
                    break ;
                maxNew = currMax;
                ans++;
            }
             maxNew--; 
        }
        return (ans);
    }
};
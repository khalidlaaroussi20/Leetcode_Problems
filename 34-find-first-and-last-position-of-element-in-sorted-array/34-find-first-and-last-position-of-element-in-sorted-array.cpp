class Solution {
public:
    int getIdxLowerTarget(vector<int>& nums, int target)
    {
        int ans = -1, l = 0, r = nums.size() - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (nums[mid] == target)
            {
                ans = mid;
                r = mid - 1;
            }
            else if (nums[mid] > target)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return (ans);
    }
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector <int> ans(2,-1);
        int lowerIdx = getIdxLowerTarget(nums, target);
        if (lowerIdx == -1)
            return (ans);
        int l = lowerIdx, r = nums.size() - 1, rightIdx = lowerIdx;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (nums[mid] == target)
            {
                rightIdx = mid;
                l = mid + 1;
            }
            else if (nums[mid] > target)
                r = mid - 1;
            else
                l = mid + 1;
        }
        ans[0] = lowerIdx;
        ans[1] = rightIdx;
        return (ans);
        
    }
};
class Solution {
public:
    bool b_search(vector<int> &nums, int target)
    {
        int left = 0, right = nums.size() - 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (nums[mid] == target)
                return (true);
            else if (nums[mid] > target)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return (false);
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int size_matrix = matrix.size();
        for (int i = 0; i < size_matrix;i++)
        {
            if (target >= matrix[i][0] && target <= matrix[i][matrix[i].size() - 1])
                return (b_search(matrix[i], target));
        }
        return (false);
    }
};
class Solution {
public:
    
bool b_search(vector<int>& nums, int left, int right,int target)
{
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

int findPivot(vector<int>& nums) 
{
    int nums_size = nums.size();
    int min_pivot = nums[0];
    int min_pivot_index = 0;
    for (int i = 1; i < nums_size;i++)
    {
        if (nums[i] <= min_pivot && nums[i] < nums[i - 1] && nums[i] <= nums[i + ((i != nums_size - 1) ? 1 : 0)])
        {
            min_pivot = nums[i];
            min_pivot_index = i;
        }
    }
    return (min_pivot_index);
}

bool search(vector<int>& nums, int target) 
{
    int size_nums = nums.size();
    int index_pivot = findPivot(nums);
    //printf("pivot = %d\n",index_pivot);
    if (nums[index_pivot] == target)
        return (true);
    else if (index_pivot == 0)
        return (b_search(nums, 0, size_nums - 1,target));
    int prev_index_pivot = index_pivot - 1;
    if (target >= nums[0] && target <= nums[prev_index_pivot])
    {
        return (b_search(nums, 0, prev_index_pivot,target));
    }
    else
    {
        int next_index_pivot = index_pivot + 1;
        if (index_pivot == size_nums - 1)
            next_index_pivot = index_pivot;
        return (b_search(nums, next_index_pivot, nums.size() - 1,target));
    }
    
}
 
};
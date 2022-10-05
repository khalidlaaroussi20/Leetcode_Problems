class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        vector <int> ans(2,0);
        int i = 0, j = numbers.size() - 1;
        while (i < j)
        {
            int sum = numbers[i] + numbers[j];
            if (target == sum)
            {
                ans[0] = i + 1;
                ans [1] = j + 1;
                break ;
            }
            else if (sum > target)
                j--;
            else
                i++;
        }
        return (ans);
    }
};
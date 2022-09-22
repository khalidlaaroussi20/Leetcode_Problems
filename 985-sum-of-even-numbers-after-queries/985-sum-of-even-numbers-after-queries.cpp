class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) 
    {
        vector <int> ans;
        int curr_sum = 0;
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] % 2 == 0)
                    curr_sum += nums[i];
        
        for (int i = 0; i < queries.size();i++)
        {
            int nbToAdd = queries[i][0];
            int idxToAdd = queries[i][1];
            bool isAlreadyEven = false;
            isAlreadyEven = (nums[idxToAdd] % 2 == 0) ? true : false;
            nums[idxToAdd] += nbToAdd;
            if (isAlreadyEven)
            {
                
                if (nums[idxToAdd] % 2 == 0)
                        curr_sum += nbToAdd;
                else
                    curr_sum -= nums[idxToAdd] - nbToAdd;
            }
            else
            {
                 if (nums[idxToAdd] % 2 == 0)
                      curr_sum += nums[idxToAdd];
            }
            ans.push_back(curr_sum);
        }
        return (ans);
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        vector <int> ans(2,0);
        map<int, int> m;
        for (int i = 0; i < numbers.size(); i++)
        {
            int nbToFind = target - numbers[i];
            if (m.find(nbToFind) != m.end())
            {
                ans[0] = m[nbToFind] + 1;
                ans[1] = i + 1;
            }
            m[numbers[i]] = i;
        }
        return (ans);
    }
};
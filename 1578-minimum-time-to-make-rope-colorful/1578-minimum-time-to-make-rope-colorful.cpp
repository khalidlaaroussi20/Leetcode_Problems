class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans = 0;
        for (int i = 1;i < colors.length(); i++)
        {
            if (colors[i] == colors[i - 1])
            {
                if (neededTime[i] < neededTime[i - 1])
                {
                    ans += neededTime[i];
                    neededTime[i] = neededTime[i - 1];
                    colors[i] = colors[i - 1];
                }
                else
                     ans += neededTime[i - 1];
            }
        }
        return (ans);
    }
};
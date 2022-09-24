class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int min_until_now = prices[0];
        for (int i = 1; i < prices.size();i++)
        {
            ans = max(ans, prices[i] - min_until_now);
            min_until_now = min (min_until_now, prices[i]);
        }
        return (ans);
    }
};
class Solution {
public:
    int numRollsToTarget(int n, int k, int target) 
    {
        int mod = 1000000007;
        vector <vector <int>>  dp(n + 1 , vector<int> (target + 1, 0));
        dp[0][0] = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= target; j++)
            {
                for (int t = 1; t <= k ;t++)
                {
                    if (j < t)
                        continue;
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - t]) % mod;
                }
                 
            }
           
        }
        return (dp[n][target]);
    }
};
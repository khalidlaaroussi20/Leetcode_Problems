class Solution {
public:
    int numRollsToTarget(int n, int k, int target) 
    {
        map <string , int> m;
        return (nbrWays(n, k, target, m));
    }
    
    int nbrWays(int n, int k , int target, map <string, int> &m)
    {
        if (target < 0)
            return (0);
        if (n == 0)
        {
            if (target == 0)
                return (1);
            return (0);
        }
        string key = "" + to_string(n) + to_string(k) + to_string(target);
        if (m.find(key) != m.end())
            return (m[key]);
        int nbWay = 0;
        for (int i = 1; i <= k;i++)
        {
           int res = nbrWays(n - 1, k, target - i,m);
            nbWay = (nbWay + res) % 1000000007;
            m[key]  = nbWay;
        }
        return (nbWay);
    }
};
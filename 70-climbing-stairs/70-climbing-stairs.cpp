class Solution {
public:
    vector <int> mem = vector <int> (46,0);
    int climbStairs(int n) 
    {
        if (n == 0)
            return (1);
        else if (n < 0)
            return (0);
        if (mem[n])
            return (mem[n]);
        mem[n] = climbStairs(n - 1) + climbStairs(n - 2);
        return (mem[n]);
    }
};
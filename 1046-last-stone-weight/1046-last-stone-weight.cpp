class Solution {
public:
    int lastStoneWeight(vector<int>& stones) 
    {
        priority_queue<int> q;
        for (int i = 0; i < stones.size();i++)
            q.push(stones[i]);
        while (!q.empty() && q.size() != 1)
        {
            int top1 = q.top();
            q.pop();
            int top2 = q.top();
            q.pop();
            int res_smash = top1 - top2;
            if (res_smash)
                q.push(res_smash);
        }
        if (!q.empty())
            return (q.top());
        return (0);
    }
};
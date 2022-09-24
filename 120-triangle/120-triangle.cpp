class Solution {
public:
   int minimumTotal(vector<vector < int > >& triangle) 
{
    int triangle_size = triangle.size();
    for(int i = 1; i < triangle.size();i++)
    {
        triangle[i][0]+= triangle[i - 1][0];
        triangle[i][i]+= triangle[i - 1][i - 1];
        for (int j = 1; j < i;j++)
        {
            int min_sum = min(triangle[i - 1][j - 1],triangle[i - 1][j]);
            triangle[i][j]+= min_sum;
        }
    }
    int min_total = INT_MAX;
    for (int i = 0; i < triangle[triangle_size - 1].size();i++)
    {
        min_total = min(min_total,triangle[triangle_size - 1][i]);
    }
    return (min_total);
}
};
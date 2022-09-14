class Solution {
public :
    int uniquePaths(int m, int n) 
    {
        vector<vector<int>> grid( m , vector<int> (n, 0)); 
        grid[0][0] = 1;
        for (int i = 0; i < grid.size();i++)
        {
            for (int j = 0; j < grid[i].size();j++)
            {
                if (i != grid.size() - 1)
                grid[i + 1][j] = grid[i][j] + grid[i + 1][j];
                if (j != grid[i].size() - 1)
                    grid[i][j + 1] = grid[i][j] + grid[i][j + 1];
            }
        }
        return (grid[m - 1][n - 1]);
    }
};
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
        if (image[sr][sc] != color)
            dfs(image, color, image[sr][sc], sr, sc);
        return (image);
    }
    void dfs(vector<vector<int>>& image, int color, int oldColor, int i , int j)
    {
        if (i < 0 || i >= image.size() ||  j < 0 || j >= image[i].size() || image[i][j] != oldColor)
            return ;
        image[i][j] = color;
        dfs(image, color, oldColor, i, j + 1);
        dfs(image, color, oldColor, i + 1, j);
        dfs(image, color, oldColor, i, j - 1);
        dfs(image, color, oldColor, i - 1, j);
    }
};
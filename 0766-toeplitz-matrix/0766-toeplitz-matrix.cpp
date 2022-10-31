class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix[0].size(); i++)
        {
            for (int j = 1; j < matrix.size(); j++)
            {
                if (j + i >= matrix[0].size())
                    break;
                if (matrix[0][i] != matrix[j][j + i])
                    return (false);
            }
        }
        for (int i = 1; i < matrix.size() - 1; i++)
        {
             for (int j = i + 1, k = 1; j < matrix.size(); j++, k++)
            {
                if (k >= matrix[0].size())
                    break;
                if (matrix[i][0] != matrix[j][k])
                    return (false);
            }
        }
        return (true);
    }
};
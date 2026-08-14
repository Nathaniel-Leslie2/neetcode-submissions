class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int targetRow = 0;

        for(int row = 0; row < matrix.size(); row++)
        {
            if (matrix[row][matrix[0].size() - 1] > target) {targetRow = row; break;}
            if (matrix[row][matrix[0].size() - 1] == target) return true;
        }

        int l = 0;
        int r = matrix[0].size() - 1;

        while(l <= r)
        {
            int m = ((r-l) / 2) + l;
            if (matrix[targetRow][m] < target) {l = m + 1; continue;}
            if (matrix[targetRow][m] > target) {r = m - 1; continue;}
            if (matrix[targetRow][m] == target) return true;
        }

        return false;
    }
};

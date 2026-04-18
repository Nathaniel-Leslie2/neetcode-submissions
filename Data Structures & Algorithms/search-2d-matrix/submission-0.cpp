class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size() - 1;
        int col = matrix[0].size() - 1;

        while(true){
            if(col < 0){col = matrix[0].size() - 1; row--;}
            if(row < 0){return false;}
            if(target != matrix[row][col]){
                col--;
            }
            else{return true;}
        }
        return false;
    }
};

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> dupeTracker;

        // Check each row for duplicates
        for(int i = 0; i < board.size(); i++)
        {
            for(int j = 0; j < board[0].size(); j++)
            {
                if(board[i][j] == '.') continue;

                if (!dupeTracker.contains(board[i][j])) dupeTracker.insert(board[i][j]);
                else return false;
            }
            dupeTracker.clear();
        }

        // Check each column for duplicates
        for(int i = 0; i < board.size(); i++)
        {
            for(int j = 0; j < board[0].size(); j++)
            {
                if(board[j][i] == '.') continue;
                
                if (!dupeTracker.contains(board[j][i])) dupeTracker.insert(board[j][i]);
                else return false;
            }
            dupeTracker.clear();
        }

        // Check each 3x3 grid for duplicates
        int rowMax = 3;
        int colMax = 3;

        while (rowMax <= 9)
        {
            for(int i = rowMax - 3; i < rowMax; i++)
            {
                for(int j = colMax - 3; j < colMax; j++)
                {
                    if(board[i][j] == '.') continue;
                    if (!dupeTracker.contains(board[i][j])) dupeTracker.insert(board[i][j]);
                    else return false;
                }
            }

            dupeTracker.clear();
            colMax += 3;
            if (colMax > 9) {colMax = 3; rowMax += 3;} 
        }

        return true;
    }
};

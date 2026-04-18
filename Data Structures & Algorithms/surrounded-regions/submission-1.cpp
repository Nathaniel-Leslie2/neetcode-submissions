class Solution {
public:
    int directions[4][2] = {{1,0}, {-1,0},{0,1},{0,-1}};

    void solve(vector<vector<char>>& board) {
        int row = board.size(); int col = board[0].size();
        queue<pair<int,int>> q;

        for(int i = 0; i < row; i++ ){
            for(int j = 0; j < col; j++){
                if(i == 0 && board[i][j] == 'O') {q.push({i, j});}
                if(j == 0 && board[i][j] == 'O') {q.push({i, j});}
                if(j == col - 1 && board[i][j] == 'O') {q.push({i, j});}
                if(i == row - 1 && board[i][j] == 'O') {q.push({i, j});}
            }
        }
        bfs(board, q);

        for(int i = 0; i < row; i++ ){
            for(int j = 0; j < col; j++){
                if(board[i][j] == 'O') board[i][j] = 'X';
            }
        }

        for(int i = 0; i < row; i++ ){
            for(int j = 0; j < col; j++){
                if(board[i][j] == 'T') board[i][j] = 'O';
            }
        }

    }

    void bfs(vector<vector<char>>& board, queue<pair<int,int>>& q ){
        
        while(!q.empty()){
            auto [row, col] = q.front(); q.pop();
            board[row][col] = 'T';
            for(int j = 0; j < 4; j++){
                int r = row + directions[j][0];
                int c = col + directions[j][1];
                if(r >= 0 && r < board.size() && c >= 0 && c < board[0].size() && board[r][c] == 'O'){
                    board[r][c] = 'T';
                    q.push({r, c});
                }
            }
        }
    }
};

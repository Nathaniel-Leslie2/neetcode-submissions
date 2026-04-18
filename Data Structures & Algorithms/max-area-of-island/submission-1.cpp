class Solution {
// Global 2D array to track max land area of an island
int direction[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

//Global class variable to track max area of an island
int maxArea = 0;

public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row = grid.size(); 
        int col = grid[0].size();

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(grid[i][j] == 1){
                    bfs(grid, i, j);
                }
            }
        }
        return maxArea;
    }

    void bfs(vector<vector<int>>& grid, int row, int col){
        queue<pair<int, int>> q;
        grid[row][col] = 0;
        q.push({row, col});
        int localMax = 1;
        maxArea = max(maxArea, localMax);

        while(!q.empty()){
            auto node = q.front(); q.pop();
            int r = node.first; int c = node.second;
            for(int i = 0; i < 4; i++){
                int nr = r + direction[i][0];
                int nc = c + direction[i][1];
                if(nr >= 0 && nc >= 0 && nr < grid.size() && nc < grid[0].size() && grid[nr][nc] == 1){
                    localMax++;
                    maxArea = max(maxArea, localMax);
                    q.push({nr, nc});
                    grid[nr][nc] = 0;
                }
            }
        }
    }
};

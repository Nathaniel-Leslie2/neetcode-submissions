class Solution {
//2D array to check rows directly above, below, left, and right of island node
int directions[4][2] = {{1, 0}, 
                        {-1, 0},
                        {0, 1}, 
                        {0, -1}};
public:
    int numIslands(vector<vector<char>>& grid) {
        int ROWS = grid.size(), COLS = grid[0].size();
        int islands = 0;

        for (int r = 0; r < ROWS; r++) {
            for (int c = 0; c < COLS; c++) {
                if (grid[r][c] == '1') {
                    bfs(grid, r, c);
                    islands++;
                }
            }
        }

        return islands;
    }

    void bfs(vector<vector<char>>& grid, int r, int c) {
        queue<pair<int, int>> q;
        grid[r][c] = '0'; // set the current grid position to 0, marks it as visited
        q.push({r, c}); // add the grid positions to the queue

        while (!q.empty()) {
            auto node = q.front();q.pop(); // auto assumes the variable type of its assignment
            int row = node.first, col = node.second; // set the row and column
            //only search four surrounding nodes
            for (int i = 0; i < 4; i++) { 
                int nr = row + directions[i][0]; // check row above and below node
                int nc = col + directions[i][1]; // check column left and right of node
                // check if our rows or columns are out of bounds, if not check if the current grid node is 1
                if (nr >= 0 && nc >= 0 && nr < grid.size() && nc < grid[0].size() && grid[nr][nc] == '1') {
                    q.push({nr, nc}); // push new islands to queue
                    grid[nr][nc] = '0'; // mark node/island as visited
                }
            }
        }
    }
};
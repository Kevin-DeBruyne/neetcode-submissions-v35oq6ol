class Solution {
   public:
    int res = 0;
    void dfs(vector<vector<char>>& grid, int i, int j, vector<vector<int>>& vis) {
        int m = grid.size();
        int n = grid[0].size();
        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == '0' || vis[i][j] == 0) {
            return;
        }
        vis[i][j] = 0;
        dfs(grid, i + 1, j, vis);
        dfs(grid, i, j + 1, vis);
        dfs(grid, i - 1, j, vis);
        dfs(grid, i, j - 1, vis);
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> vis(301, vector<int>(301, 1));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1' && vis[i][j] == 1) {
                    res++;
                    dfs(grid, i, j, vis);
                }
            }
        }
        return res;
    }
};

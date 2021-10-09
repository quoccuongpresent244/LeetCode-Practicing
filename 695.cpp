class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        vector<vector<int>> check(50, vector<int>(50));
        int count = 0;
        int maxx = 0;
            
        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[0].size(); j++){
                if (grid[i][j] == 1 && check[i][j] != 1)
                    dfs(grid, i, j, count, check);
                maxx = max(count, maxx);
                count = 0;
            }
        }
        return maxx;
    }
private: 
    void dfs(vector<vector<int>> &grid, int i, int j, int &count, vector<vector<int>>& check){
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || check[i][j] != 0 || grid[i][j] != 1)
            return;
        count++;
        check[i][j] = 1;
        dfs(grid, i+1, j, count, check);
        dfs(grid, i-1, j, count, check);
        dfs(grid, i, j+1, count, check);
        dfs(grid, i, j-1, count, check);
    }
};
class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int width = grid.size();
        int height = grid[0].size();
        
        int MaxArea = 0;
        
        for(int i = 0;i < width; ++i) {
            for(int j = 0;j < height;++j) {
                if(grid[i][j] == 1)
                    MaxArea = max(MaxArea, dfs(i,j,grid));
            }
            
        }
        return MaxArea;
        
    }
private:
    int dfs(int i,int j,vector<vector<int>>& grid) {
        
        int width = grid.size();
        int height = grid[0].size();
        
        //terminal condition
        if(i < 0 || j < 0 || i > width - 1 || j > height -1 || grid[i][j] == 0)
            return 0;
        
        return  (grid[i][j]--) + dfs(i-1,j,grid) + dfs(i+1,j,grid) + dfs(i,j-1,grid) + dfs(i,j+1,grid);
        
    }
};

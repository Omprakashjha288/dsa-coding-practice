class Solution {
public:

    int m, n;
    vector<pair<int,int>> directions = {
        {0,1},
        {0,-1},
        {1,0},
        {-1,0}
    };
    void dfs(int r, int c, vector<vector<bool>>& vis, vector<vector<int>>& heights){
        vis[r][c] = true;
        for(auto &dir : directions){
            int nr = r + dir.first;
            int nc = c + dir.second;
            if(nr >= 0 && nr < m && nc >= 0 && nc < n){
                if(!vis[nr][nc] && heights[nr][nc] >= heights[r][c]){
                    dfs(nr, nc, vis, heights);
                }

            }
        }
    }


    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {

        m = heights.size();
        n = heights[0].size();

        vector<vector<bool>> pacific(m, vector<bool>(n,false));
        vector<vector<bool>> atlantic(m, vector<bool>(n,false));


        for(int i = 0; i < n; i++){
            dfs(0, i, pacific, heights);
            dfs(m-1, i, atlantic, heights);
        }


        for(int i = 0; i < m; i++){
            dfs(i, 0, pacific, heights);
            dfs(i, n-1, atlantic, heights);
        }


        vector<vector<int>> result;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){

                if(pacific[i][j] && atlantic[i][j]){
                    result.push_back({i,j});
                }

            }
        }

        return result;
    }
};
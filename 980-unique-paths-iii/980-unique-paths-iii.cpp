class Solution {
public:
    int solve(vector<vector<int>> grid, vector<vector<int>> &vis, int i, int j, int m, int n, int cnt, int target){
        if(i>m || j>n || i<0 || j<0) return 0;
        if(vis[i][j] == 1) return 0;
        // cout<<i<<" "<<j<<endl;
        if(grid[i][j] == 2) {
            if(cnt==target)   return 1;
            else return 0;
        } 
        if(grid[i][j] == -1) return 0;
        
        vis[i][j] = 1;
        int sum = solve(grid, vis, i+1, j, m, n, cnt+1, target) + solve(grid, vis, i, j+1, m, n, cnt+1, target) + 
                  solve(grid, vis, i-1, j, m, n, cnt+1, target) + solve(grid, vis, i, j-1, m, n, cnt+1, target);
        vis[i][j] = 0;
        return sum;
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        int i_ind, j_ind, m = grid.size(), n = grid[0].size(); bool flag = false;
        vector<vector<int>> vis(m, vector<int>(n, 0)); int cnt = 1;
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(grid[i][j]==1) {
                    flag = true; i_ind = i; j_ind = j;
                }
                if(grid[i][j] == -1) cnt++;
            }
        }
        // cout<<cnt<<endl;
        // cout<<i_ind<<" "<<j_ind;
        return solve(grid, vis, i_ind, j_ind, m-1, n-1, cnt, (m*n));
    }
};
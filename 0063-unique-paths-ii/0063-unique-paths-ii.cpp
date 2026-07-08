class Solution {
public:
        int solve(vector<vector<int>>& obstacleGrid, int r, int c, int m, int n, vector<vector<int>> &dp) {
        if(r >= m || c >= n) return 0;
        if(obstacleGrid[r][c]==1) return 0;
        if(r == m-1&& c == n-1)
            return 1;
        if(dp[r][c]!=-1){ return dp[r][c];}
        int down = solve(obstacleGrid,r + 1, c, m, n,dp);
        int right = solve(obstacleGrid,r, c + 1, m, n,dp);

        return dp[r][c]=down + right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>> dp(m+5,vector<int>(n+5, -1));
        return solve(obstacleGrid,0,0,m,n, dp);
    }
};
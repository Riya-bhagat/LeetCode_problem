class Solution {
public:
    int solve(vector<vector<int>> &grid, int r1,int r2, int c1,vector<vector<vector<int>>> &dp){
        int n=grid.size();
        int c2=r1+c1-r2;

        if(dp[r1][r2][c1]!=-1) return dp[r1][r2][c1];

        if(r1>=n||c1>=n||r2>=n||c2>=n) return -10000;

        if(grid[r1][c1]==-1||grid[r2][c2]==-1) return -10000;
      
        if(r1==n-1&&c1==n-1) return grid[r1][c1];

        int dd= solve(grid,r1+1,r2+1,c1,dp);
        int dr= solve(grid,r1+1,r2,c1,dp);
        int rd= solve(grid,r1,r2+1,c1+1,dp);
        int rr=solve(grid,r1,r2,c1+1,dp);

        if(r1==r2&&c1==c2){
            return dp[r1][r2][c1]=grid[r1][c1] + max({dd,dr,rd,rr});
        }else{
            return dp[r1][r2][c1]=grid[r1][c1]+ grid[r2][c2]+ max({dd,dr,rd,rr});
        }
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(n+1,vector<int>(n+1,-1)));
        return max(solve(grid,0,0,0,dp),0);
    }
};
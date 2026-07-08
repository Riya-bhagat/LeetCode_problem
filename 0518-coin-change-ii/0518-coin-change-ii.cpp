class Solution {
public:
    int solve(vector<int>& coins, int amount,int index, vector<vector<int>> &dp){
        if(amount==0) return 1;
        if(index<0||amount<0) return 0;
        if(dp[amount][index]!=-1){return dp[amount][index];}
        int a= solve(coins, amount-coins[index], index,dp);
        int b= solve(coins, amount, index-1,dp);
        return  dp[amount][index]=a+b;
    }
    int change(int amount, vector<int>& coins) {
        int n= coins.size();
        vector<vector<int>> dp(amount+5,vector<int>(n+5,-1));
        return solve(coins, amount,n-1,dp);
    }
};
class Solution {
public:
       int solve(vector<int>& nums, int index,vector<int>& dp){
        int n = nums.size();
        if(index >= n-1) return 0; 
        if(dp[index]!=-1) return dp[index];
        int ans=1e9;
        int jump=1;
        while(jump<=nums[index]){
            ans = min(ans,1+solve(nums,index+jump,dp));
            jump++;  
        }

        return dp[index]=ans;
    }
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp (n+5, -1);
        
      return solve(nums,0,dp);  
    }
};
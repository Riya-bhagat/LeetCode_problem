class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> runningSum(n);
        for(int i=0;i<n;i++){
            if(i==0){
                runningSum[i]=nums[i];
            }else{
                runningSum[i]=runningSum[i-1]+nums[i];
            }
        }
    return {runningSum};
   }
};
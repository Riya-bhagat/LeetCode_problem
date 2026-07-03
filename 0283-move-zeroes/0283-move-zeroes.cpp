class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();
        int temp;
        int j=0;
        for (int i =0;i<n;i++){
            if(nums[i]!=0){
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                j++;
            }
        }
    }
};
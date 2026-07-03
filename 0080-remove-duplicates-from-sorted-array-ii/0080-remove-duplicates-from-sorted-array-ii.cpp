class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n= nums.size();
        int count=1;
        int i=1;
        while(i<nums.size()){
            if(nums[i]==nums[i-1]){
                count++;
            }else{
                count=1;
            }
            if(count>2){
                nums.erase(nums.begin()+i);
                count--;
            }else{
                i++;
            }
        }
         return nums.size();
    }
};
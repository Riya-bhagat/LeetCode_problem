class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int max=n/2;
        sort(nums.begin(),nums.end());
        int ans=nums[max];
        return ans;
    }
};
        // int n = nums.size();
        // int max=n/2;
        // for(int i =0;i<n;i++){
        //     int j = 0;
        //     int count =0;
        //     while(j<n){
        //         if(nums[i]==nums[j]){
        //             count++;    
        //         }
        //         j++;
        //     }
        //     if(count>max){
        //         return nums[i];
        //     }
        // }  
        // return 0;
//     }
// };
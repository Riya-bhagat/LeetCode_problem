class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n= numbers.size();
        int s=0;
        int e=n-1;
        int current=0;
        while(s<=e){
            current = numbers[s]+numbers[e];
            if(current==target){
                return {s+1,e+1};
            }else if(current>target){
                e=e-1;
            }else{
                s=s+1;
            }
        } 
          return {};
    }
};
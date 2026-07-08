class Solution {
public:
    bool solve(vector<int>& arr, int start ,vector<bool> vist){
        int n= arr.size();
        int idx = start;
        
        if(idx>n-1||idx<0) return false;
        if(arr[idx]==0) return true;
        if(vist[idx]) return false;

        vist[idx]=true;

        int a= solve(arr,start+arr[start],vist);
        int b = solve(arr,start-arr[start],vist);
        return a||b;
    }
    bool canReach(vector<int>& arr, int start) {
        vector<bool> vist(arr.size(),false);
       return solve(arr,start,vist); 
    }
};
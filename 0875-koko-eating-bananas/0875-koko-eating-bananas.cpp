class Solution {
public:

    bool canEat(vector<int>& piles, int h, int mid){
        long long time = 0;
        for(int i=0;i<piles.size();i++){
            time += (piles[i]+mid-1)/mid;
            if(time>h)return false;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        // sort(piles.begin(),piles.end());
        int  n= piles.size();
        int mx=INT_MIN;
         for(int i=0;i<n;i++){
            mx=max(mx,piles[i]);
        }
        int low = 1;
        int high = mx;
        int res=1;
        while(low<=high){
            int mid = low+ (high-low)/2;
            if(canEat(piles,h,mid)){
                res=mid;
                high = mid-1;
            }else{
                low = mid +1;
            }
        }
        return res;
    }
};
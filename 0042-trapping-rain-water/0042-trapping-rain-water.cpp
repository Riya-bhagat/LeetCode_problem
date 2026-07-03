class Solution {
public:
        int trap(vector<int>& height) {
        int n = height.size();
        if (n <= 2) return 0;
        int leftMax[20000], rightMax[20000];
        leftMax[0] = height[0];
        rightMax[n-1]= height[n-1];
        
        //LEFTMAX
        for(int i=1; i<=n-1; i++){
            leftMax[i]=max(leftMax[i-1],height[i-1]);
        }
        //RIGHTMAX
        for(int i=n-2; i>=0; i--){
            rightMax[i]=max(rightMax[i+1],height[i+1]);
        }

        int watertraped=0;
        for(int i = 0;i<=n-1;i++){
            int currtrap= min(leftMax[i],rightMax[i])-height[i];
            if (currtrap>0){
                watertraped+=currtrap;
            }
        }
        return watertraped;
    }
};
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        int m=accounts[0].size();
        int sum1=0;
       
        for(int i=0;i<n;i++){
             int sum2=0;
            for(int j=0;j<m;j++){
                sum2+=accounts[i][j];
                sum1=max(sum1,sum2);
            }
        }
        return sum1;
    }
};
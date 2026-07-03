class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m = matrix[0].size();
        int low = 0;
        int high = n*m-1;

        while(low<=high){
            int mid = low + (high - low)/2;
            int row = mid/m;
            int col = mid%m;
            if(target==matrix[row][col]){
                return true;
            }else if(target<matrix[row][col]){
                high = mid-1;
            }else{
                low = mid +1;
            }
        }

        // for (int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(target==matrix[i][j]){
        //             return true;
        //         }
        //     }
        // }
        return 0;
    }
};
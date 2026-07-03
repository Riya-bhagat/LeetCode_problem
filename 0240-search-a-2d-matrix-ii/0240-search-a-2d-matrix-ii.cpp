class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n= matrix.size();
        int m = matrix[0].size();
        int row=0;
        int col = m-1;
        while(row<n&&col>=0){
            if(target==matrix[row][col])return true;
            else if(target<matrix[row][col]) col--;
            else row++;
        }


        // for(int i = 0; i<n;i++){
        //     low = 0;
        //     high = m-1;
        //     while(low<=high){
        //     mid= low + (high-low)/2;
        //     if(target==matrix[i][mid]){
        //         return true;
        //     }else if(target<matrix[i][mid]){
        //         high = mid-1;
        //     }else{
        //         low = mid+1;
        //     }
        //     }
        // }
        return false;
    }
};
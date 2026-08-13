class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int srow = 0;
        int scol = 0;
        int erow = matrix.size() - 1;
        int ecol = matrix[0].size() - 1;

        vector<int> res;

        while (srow <= erow && scol <= ecol) {
            // top
            for (int i = scol; i <= ecol; i++) {
                res.push_back(matrix[srow][i]);
            }
            srow++;
            // right
            for (int j = srow; j <= erow; j++) {
                res.push_back(matrix[j][ecol]);
            }
            ecol--;
            // bottom

            if (srow <= erow) {
                for (int i = ecol; i >= scol; i--) {
                    res.push_back(matrix[erow][i]);
                }
                erow--;
            }
            // left
            if (scol <= ecol) {
                for (int j = erow; j >= srow; j--) {
                    res.push_back(matrix[j][scol]);
                }
                scol++;
            }
        }
        return res;
    }
};
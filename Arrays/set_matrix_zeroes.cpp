class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        //traverse the matrix and mark accordingly -> what to mark? the first rows and columns
        //but, there might arise a case, where only the first row needs to be 0, but marking M[0][0] = 0 may prove that, even the first column is zeroes, therefore we signify the first row as M[0][0] = 0 and first column as col0 = 0

        int col0 = 1;

        //traverse and mark
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    // mark i-th row:
                    matrix[i][0] = 0;

                    // mark j-th column:
                    if (j != 0)
                        matrix[0][j] = 0;
                    else
                        col0 = 0;
                }
            }
        }

        //mark as zeroes all elements except the first row and column as they will be used to mark the rest
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][j] != 0) {
                    // check for col & row:
                    if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                        matrix[i][j] = 0;
                    }
                }
            }
        }

        //mark the first row and the first column
        if (matrix[0][0] == 0) {
            for (int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }
        if (col0 == 0) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};

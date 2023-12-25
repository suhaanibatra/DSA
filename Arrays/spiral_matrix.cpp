class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        int rowStart = 0, rowEnd = n - 1;
        int colStart = 0, colEnd = m - 1;

        int total = n*m, cnt = 0;
        vector<int> ans;

        while(cnt < total){
            //print row, left to right
            for(int i = colStart; i <= colEnd && cnt < total; i++){
                ans.push_back(matrix[rowStart][i]);
                cnt++;
            }
            rowStart++;

            //print col, up to down
            for(int i = rowStart; i <= rowEnd && cnt < total; i++){
                ans.push_back(matrix[i][colEnd]);
                cnt++;
            }
            colEnd--;

            //print row, right to left
            for(int i = colEnd; i >= colStart && cnt < total; i--){
                ans.push_back(matrix[rowEnd][i]);
                cnt++;
            }
            rowEnd--;

            //print col, down to up
            for(int i = rowEnd; i >= rowStart && cnt < total; i--){
                ans.push_back(matrix[i][colStart]);
                cnt++;
            }

            colStart++;
        }

        return ans;
    }
};

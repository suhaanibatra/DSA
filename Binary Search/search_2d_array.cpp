class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();

        //each row is sorted -- increasing order
        int start = 0, end = m*n - 1;

        while(start <= end){
            int mid = start + (end - start)/2;
            int x = (mid/n);
            int y = (mid%n);

            if(matrix[x][y] == target) return true;
            else if(matrix[x][y] < target) start = mid + 1;
            else end = mid - 1;
        }
        return false;
    }
};

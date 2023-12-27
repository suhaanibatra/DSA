class Solution {
public:
    vector<int> solvePascal(vector<int> prev){
        int n = prev.size();

        vector<int> curr(n + 1, 0);
        curr[0] = 1, curr[n] = 1;

        for(int i = 1; i < n; i++){
            curr[i] = prev[i - 1] + prev[i];
        }
        return curr;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> prev;

        // if(numRows == 0){
        //     //no rows
        //     return ans;
        // }

        //for n = 1
        prev.push_back(1);
        ans.push_back(prev);
        if(numRows == 1) return ans;

        //for n = 2
        prev.push_back(1);
        ans.push_back(prev);
        if(numRows == 2) return ans;

        //for the remaining rows
        for(int i = 2; i < numRows; i++){
            vector<int> curr = solvePascal(prev);
            ans.push_back(curr);
            prev = curr;
        }
        return ans;
    }
};

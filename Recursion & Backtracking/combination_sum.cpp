class Solution {
public:
    void solve(vector<int>& candidates, int target, int i, vector<int>& temp, vector<vector<int>>& ans){
        if(target == 0){
            ans.push_back(temp);
            return;
        }

        if(target < 0){
            return;
        }
        if(i >= candidates.size()) return;

        //exclude
        solve(candidates, target, i + 1, temp, ans);

        //include
        temp.push_back(candidates[i]);
        solve(candidates, target - candidates[i], i, temp, ans);

        //backtrack
        temp.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(candidates, target, 0, temp, ans);

        return ans;
    }
};

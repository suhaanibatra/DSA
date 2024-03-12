class Solution {
public:
    int solve(vector<int>& nums, int ind){
        if(ind == nums.size() - 1) return nums[nums.size() - 1];
        if(ind >= nums.size()) return 0;

        int include = nums[ind] + solve(nums, ind + 2);
        int exclude = 0 + solve(nums, ind + 1);

        return max(include, exclude);
    }
    
    int rob(vector<int>& nums) {
        return solve(nums, 0);
    }
};

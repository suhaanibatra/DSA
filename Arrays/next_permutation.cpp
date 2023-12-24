class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //find breakpoint
        int n = nums.size();
        int breakPoint = -1;

        for(int i = n - 2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                breakPoint = i;
                break;
            }
        }

        //no breakpoint found -> edge case
        if(breakPoint == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        //taking the digit just greater from the end 
        for(int i = n - 1; i > breakPoint; i--){
            if(nums[i] > nums[breakPoint]){
                swap(nums[i], nums[breakPoint]);
                break;
            }
        }

        //sorting the remaining elements
        sort(nums.begin() + breakPoint + 1, nums.end());

    }
};

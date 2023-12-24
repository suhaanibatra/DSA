class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(), -1);

        int pos = 0, neg = 1;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 0){
                //negative
                ans[neg] = nums[i];
                neg += 2;
            }
            else{
                //positive
                ans[pos] = nums[i];
                pos += 2;
            }
        }

        return ans;
    }
};

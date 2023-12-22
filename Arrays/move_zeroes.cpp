class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //since order needs to be maintained, we cannot use end pointer approach
        int i = 0;
        for(int j = 0; j < nums.size(); j++){
            if(nums[j] != 0){
                swap(nums[i], nums[j]);
                i++;
            }
        }
    }
};

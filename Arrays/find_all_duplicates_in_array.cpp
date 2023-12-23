class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        //brute force 
        // unordered_map<int, int> mp;
        // vector<int> ans;
        // for(int num: nums){
        //     mp[num]++;
        // }
        // for(auto it: mp){
        //     if(it.second == 2) ans.push_back(it.first);
        // }

        // return ans;

        //negative method
        //since we have numbers from 1 to n only -- therefore this method is applicable and the numbers can be used as indices somehow

        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n; i++){
            int index = abs(nums[i]) - 1;

            if(nums[index] > 0){
                //not negative -> not visited
                nums[index] *= -1;
            }

            else{
                //negative
                //add to ans
                ans.push_back(index + 1);
            }
        }
        return ans;
    }
};

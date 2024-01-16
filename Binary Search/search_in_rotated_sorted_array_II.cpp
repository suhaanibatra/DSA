class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();

        int start = 0, end = n - 1;

        while(start <= end){
            int mid = start + (end - start)/2;

            if(nums[mid] == target) return true;

            if(nums[start] == nums[mid] && nums[mid] == nums[end]){
                //edge case
                start = start + 1;
                end = end - 1;
                continue;
            }

            //left part is sorted
            if(nums[start] <= nums[mid]){
                if(nums[start] <= target && nums[mid] >= target){
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
            }

            //right part is sorted
            else{
                if(nums[mid] <= target && nums[end] >= target){
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
        }

        return false;
    }
};

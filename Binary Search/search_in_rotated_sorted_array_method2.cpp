class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0, end = n - 1;
        
        while(start <= end){
            int mid = start + (end - start)/2;
            if(nums[mid] == target) return mid;
            
            //if left part is sorted
            if(nums[start] <= nums[mid]){
                if(nums[start] <= target && nums[mid] >= target){
                    //search within
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
            }
            
            //if right part is sorted
            else{
                if(nums[mid] <= target && nums[end] >= target){
                    //search within
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
        }
        
        return -1;
    }
};

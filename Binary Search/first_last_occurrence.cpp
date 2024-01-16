class Solution {
public:
    int findFirstOcc(vector<int>& nums, int n, int target){
        int start = 0, end = n - 1;
        int ans = -1;

        while(start <= end){
            int mid = start + (end - start)/2;

            if(nums[mid] == target){
                ans = mid;
                end = mid - 1;
            }

            else if(nums[mid] < target){
                start = mid + 1;
            }

            else{
                end = mid - 1;
            }
        }

        return ans;
    }

    int findLastOcc(vector<int>& nums, int n, int target){
        int start = 0, end = n - 1;
        int ans = -1;

        while(start <= end){
            int mid = start + (end - start)/2;

            if(nums[mid] == target){
                ans = mid;
                start = mid + 1;
            }

            else if(nums[mid] < target){
                start = mid + 1;
            }

            else{
                end = mid - 1;
            }
        }

        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = findFirstOcc(nums, n, target);
        int last = findLastOcc(nums, n, target);

        return {first, last};
    }
};

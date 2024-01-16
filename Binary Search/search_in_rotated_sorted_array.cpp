class Solution {
public:
    int findPivotIndex(vector<int>& nums, int n){
        if(nums[0] <= nums[n - 1]) return 0; //not rotated

        int start = 0, end = n - 1;
        int pivot = -1;

        while(start <= end){
            int mid = start + (end - start)/2;

            if(nums[mid] > nums[mid + 1]) return mid + 1;
            else if(nums[mid] >= nums[start]) start = mid + 1;
            else end = mid - 1;
        }

        return 0;
    }

    int binarySearch(vector<int>& nums, int start, int end, int target){
        int n = nums.size();

        while(start <= end){
            int mid = start + (end - start)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) start = mid + 1;
            else end = mid - 1;
        }

        return -1;
    }

    int search(vector<int>& nums, int target) {
       int n = nums.size();

        //find pivot index
        int pivot = findPivotIndex(nums, n);

        if(target >= nums[pivot] && target <= nums[n - 1]) return binarySearch(nums, pivot, n - 1, target);
        else{
            return binarySearch(nums, 0, pivot - 1, target);
        }
    }
};

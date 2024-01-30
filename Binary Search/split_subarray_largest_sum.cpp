class Solution {
public:
    bool isPossible(vector<int>& nums, int k, int mid){
        int n = nums.size();
        int subArrayCnt = 1;
        int currSum = 0;

        for(int i = 0; i < n; i++){
            if(currSum + nums[i] <= mid){
                currSum += nums[i];
            }
            else{
                subArrayCnt++;
                if(nums[i] > mid || subArrayCnt > k) return false;
                currSum = nums[i];
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();

        if(k > n) return -1;

        int start = *max_element(nums.begin(), nums.end());
        int end = accumulate(nums.begin(), nums.end(), 0);
        int ans = -1;

        while(start <= end){
            int mid = start + (end - start)/2;
            if(isPossible(nums, k, mid)){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;
    }
};

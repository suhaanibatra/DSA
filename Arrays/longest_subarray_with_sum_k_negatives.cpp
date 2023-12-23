#include <map>
#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    int sum = 0;
    map<int, int> preSum;

    int maxLen = 0;
    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];

        if(sum == k){
            maxLen = max(maxLen, i + 1);
        }
        int rem = sum - k;

        if(preSum.find(rem) != preSum.end()){
            maxLen = max(maxLen, i - preSum[rem]);
        }

        if(preSum.find(sum) == preSum.end()){
            preSum[sum] = i;
        }
    }

    return maxLen;
}

#include <map>
int longestSubarrayWithSumK(vector<int> a, long long k) {
    //only positives
    //optimal solution

    int left = 0, right = 0;
    long long sum = a[0];
    int maxLen = 0;

    while(right < a.size()){
        while(left <= right && sum > k){
            sum -= a[left];
            left++;
        }

        if(sum == k){
            maxLen = max(maxLen, right - left + 1);
        }

        right++;
        if(right < a.size()){
            sum += a[right];
        }
    }
    return maxLen;
}

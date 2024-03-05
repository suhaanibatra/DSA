class Solution {
public:
    int beautySum(string s) {
        int ans = 0;
        int n = s.length();

        for(int i = 0; i < n; i++){
            map<char, int> mpp;
            for(int j = i; j < n; j++){
                mpp[s[j]]++;
                int maxi = INT_MIN;
                int mini = INT_MAX;
                for(auto it: mpp){
                    maxi = max(maxi, it.second);
                    mini = min(mini, it.second);
                }
                ans += maxi - mini;
            }

        }
        return ans;
    }
};

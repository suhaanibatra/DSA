class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        string ans = "";

        bool flag = false;

        for(int i = n - 1; i >= 0; i--){
            if((num[i] - '0')&1){
                //odd
                flag = true;
            }
            if(flag) ans += num[i];
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

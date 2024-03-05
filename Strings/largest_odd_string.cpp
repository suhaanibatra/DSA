class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        int flag = 0;
        int n = num.length();

        for(int i = n - 1; i >= 0; i--){
            char ch = num[i];
            if((int)ch & 1) flag = 1;

            if(flag){
                ans += ch;
            }

        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

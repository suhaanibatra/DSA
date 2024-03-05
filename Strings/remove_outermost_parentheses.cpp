class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int cnt = 0;
        for(char ch: s){
            if(ch == '(' && cnt == 0){
                cnt++;
            }
            else if(ch == '(' && cnt > 0){
                ans += ch;
                cnt++;
            }
            else if(ch == ')' && cnt > 1){
                ans += ch;
                cnt--;
            }
            else{
                cnt--;
            }
        }
        return ans;
    }
};

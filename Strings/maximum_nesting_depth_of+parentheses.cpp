class Solution {
public:
    int maxDepth(string s) {
        int open = 0;
        int ans = 0;
        for(char ch: s){
            if(ch == '('){
                open++;
            }
            else if(ch == ')'){
                open--;
            }
            ans = open > ans ? open : ans;

        }
        return ans;
    }
};

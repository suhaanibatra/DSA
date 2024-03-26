class Solution {
public:
    bool solve(string& s, string& p, int i, int j){
        if(i < 0 && j < 0) return true;
        if(j < 0 && i >= 0) return false;

        if(i < 0 && j >= 0){
            while(j != -1){
                if(p[j] == '*'){
                    j--;
                }
                else{
                    return false;
                }
            }
            return true;
        }

        if(s[i] == p[j]) return solve(s, p, i - 1, j - 1);
        if(p[j] == '?') return solve(s, p, i - 1, j - 1);
        if(p[j] == '*') return solve(s, p, i - 1, j);
        return false;
    }
    bool isMatch(string s, string p) {
        return solve(s, p, s.length() - 1, p.length() - 1);
    }
};

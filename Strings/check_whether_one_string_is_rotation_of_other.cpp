class Solution {
public:
    void rotate(string& s){
        char tmp = s[0];
        for(int i = 0; i < s.length() - 1; i++){
            s[i] = s[i + 1];
        }
        s[s.length() - 1] = tmp;
    }

    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;

        int n = s.length();
        for(int i = 0; i < n; i++){
            if(s == goal) return true;
            rotate(s);
        }

        return false;
        
    }
};

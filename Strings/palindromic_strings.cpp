class Solution {
public:
    int expandAroundIndex(string s, int i, int j){
        int count = 0;
        while(i >= 0 && j < s.length() && s[i] == s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }

    int countSubstrings(string s) {
        int len = s.length();

        int count = 0;

        for(int i = 0; i < len; i++){
            count += expandAroundIndex(s, i, i);
            count += expandAroundIndex(s, i, i + 1);
        }

        return count;
    }
};

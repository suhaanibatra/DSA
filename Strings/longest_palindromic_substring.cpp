class Solution {
public:
    bool checkPalindrome(string s, int i, int j){
        //i = start, j = end
        while(i <= j){
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.length();
        int maxLen = INT_MIN;
        string ans = "";

        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                if(checkPalindrome(s, i, j)){
                    if(maxLen < j - i + 1){
                        maxLen = j - i + 1;
                        ans = s.substr(i, j - i + 1);
                    }
                }
            }
        }
        return ans;
        
    }
};

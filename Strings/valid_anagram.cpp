class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char, int> mpp;

        for(char ch: s){
            mpp[ch]++;
        }

        for(char ch: t){
            mpp[ch]--;

            if(mpp[ch] < 0) return false;
        }

        return true;
    }
};

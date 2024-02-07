class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256] = {0}; //to store count
        bool isItMapped[256] = {false};

        for(int i = 0; i < s.length(); i++){
            if(hash[s[i]] == 0 && isItMapped[t[i]] == false){
                hash[s[i]] = t[i];
                isItMapped[t[i]] = true;
            }
        }

        //check
        for(int i = 0; i < s.length(); i++){
            if(char(hash[s[i]] != t[i])){
                return false;
            }
        }

        return true;
    }
};

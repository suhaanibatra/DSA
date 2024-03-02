class Solution {
public:
    unordered_map<char,int> mp;
    bool check(string& a, string& b){
        int aSz = a.length(), bSz = b.length();

        for(int i = 0; i < min(aSz, bSz); i++){
            if(mp[a[i]] > mp[b[i]]) return false;
            if(mp[a[i]] < mp[b[i]]) return true;
        }
        if(aSz > bSz) return false;
        return true;
    }
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i = 0; i < order.length(); i++){
            mp[order[i]] = i;
        }

        for(auto it: mp){
            cout << it.first << " -> " << it.second << endl;
        }

        for(int i = 0; i < words.size() - 1; i++){
            string word1 = words[i];
            string word2 = words[i + 1];
            if(check(word1, word2) == false) return false;
        }

        return true;
    }
};

class Solution {
public:
    std::array<int, 256> hash(string s){
        std::array<int, 256> hash = {0};

        for(int i = 0; i < s.length(); i++){
            hash[s[i]]++;
        }

        return hash;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<std:: array<int,256>, vector<string>> mpp;

        for(auto str: strs){
            std::array<int, 256> hashMap = hash(str);
            mpp[hashMap].push_back(str);
        }

        for(auto i: mpp){
            ans.push_back(i.second);
        }

        return ans;
    }
};

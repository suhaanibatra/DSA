class Solution {
public:
    string customSortString(string order, string s) {
        string ans = "";

        map<char, int> mp;
        for(int i = 0; i < s.length(); i++){
            mp[s[i]]++;
        }

        for(int i = 0; i < order.length(); i++){
            if(mp.find(order[i]) != mp.end()){
                while(mp[order[i]] != 0){
                    ans.push_back(order[i]);
                    mp[order[i]]--;
                }
                mp.erase(order[i]);
            }
        }

        //remaining characters
        for(auto it: mp){
            char ch = it.first;
            int freq = it.second;
            while(freq--){
                ans.push_back(ch);
            }
        }

        return ans;
    }
};

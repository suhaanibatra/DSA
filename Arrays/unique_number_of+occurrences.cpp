class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;

        for(int num: arr){
            mp[num]++;
        }

        set<int> st;
        for(auto it: mp){
            st.insert(it.second);
        }

        return mp.size() == st.size();
    }
};

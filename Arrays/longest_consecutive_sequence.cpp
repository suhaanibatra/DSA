class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;

        if(nums.size() == 0) return 0;

        for(int i: nums){
            st.insert(i);
        }
        int maxi = 1;

        for(int i: st){
            if(st.find(i - 1) == st.end()){
                //i is starting
                int curr = 1;
                int x = i;
                while(st.find(x + 1) != st.end()){
                    curr++;
                    x++;
                }

                maxi = max(maxi, curr);
            }
        }

        return maxi;
    }
};

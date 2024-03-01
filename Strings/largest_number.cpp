class Solution {
public:
    static bool cmp(string a, string b){
        return a + b > b + a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> snums;
        for(int i : nums){
            snums.push_back(to_string(i));
        }

        sort(snums.begin(), snums.end(), cmp);
        // for(string s: snums){
        //     cout << s << endl;
        // }

        if(snums[0] == "0") return "0";

        string ans = "";
        for(string s: snums){
            ans += s;
        }
        return ans;
    }
};

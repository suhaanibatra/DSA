class Solution {
public:
    string reverseWords(string s) {
        int len = s.length();
        string temp = "";
        string ans = "";

        for(int i = 0; i < len; i++){
            char ch = s[i];
            if(ch != ' '){
                temp += ch;
            }
            else if(temp != ""){
                reverse(temp.begin(), temp.end());
                ans += temp;
                ans = ans + " ";
                temp = "";
            }
        }

        if(temp != ""){
            reverse(temp.begin(), temp.end());
            ans += temp;
            temp = "";
        }

        while(ans.back() == ' '){
            ans.pop_back();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

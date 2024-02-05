class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string temp = "";
        string ans = "";

        for(int i = 0; i < n; i++){
            char ch = s[i];

            if(ch != ' '){
                //not a space -- add to temp
                temp += ch;
            }

            else if(ch == ' '){
                if(ans != ""){
                    if(temp.length() != 0) ans = temp + " " + ans;
                }
                else ans = temp;
                temp = "";
            }
        }    

        if(temp != ""){
            if(ans != "") ans = temp + " " + ans;
            else ans = temp;
        }
        if(ans[ans.size() - 1] == ' ') ans.pop_back();
        return ans;
    }
};

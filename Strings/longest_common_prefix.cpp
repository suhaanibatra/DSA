class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int i = 0;
 
        while(true){
            char currCh = 0;

            for(string str: strs){
                if(i >= str.size()){
                    currCh = 0;
                    break;
                }

                if(currCh == 0) currCh = str[i];
                else if(currCh != str[i]){
                    currCh = 0;
                    break;
                }
            }
            if(currCh == 0){
                break;
            }
            ans.push_back(currCh);
            i++;
        }

        return ans;
    }
};

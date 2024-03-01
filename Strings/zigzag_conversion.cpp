class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        vector<string> rows(numRows);

        int i = 0, row = 0;
        int direction = 1; //top to bottom

        while(true){
            if(direction == 1){
                while(i < s.size() && row < numRows){
                    rows[row++].push_back(s[i++]);
                }
                row = numRows - 2;
            }

            else{
                while(i < s.size() && row >= 0){
                    rows[row--].push_back(s[i++]);
                }
                row = 1;
            }

            if(i >= s.size()) break;
            direction = direction == 1 ? 0 : 1;
        }

        string ans = "";
        for(int j = 0; j < rows.size(); j++){
            ans += rows[j];
        }

        return ans;
    }
};

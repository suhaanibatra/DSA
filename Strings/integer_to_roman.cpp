class Solution {
public:
    string intToRoman(int num) {
        map<int, string, greater<int>> mpp;
        mpp = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, 
                {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
        string ans = "";

        for(auto it: mpp){
            int number = it.first;
            string rep = it.second;
            
            // cout << number << " -> " << rep << endl;
            while(num >= number){
                ans += rep;
                num = num - number;
            }
        }

        return ans;
    }
};

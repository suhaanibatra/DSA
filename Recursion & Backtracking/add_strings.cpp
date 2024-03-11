class Solution {
public:
    void solve(string& num1, string& num2, int p1, int p2, string& ans, int carry = 0){
        if(p1 < 0 && p2 < 0){
            if(carry != 0) ans.push_back(carry + '0');
            return;
        }

        int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';
        int n2 = (p2 >= 0 ? num2[p2] : '0') - '0';

        int num = n1 + n2 + carry;
        int digit = num % 10;
        carry = num / 10;

        ans.push_back(digit + '0');
        
        solve(num1, num2, p1 - 1, p2 - 1, ans, carry);

    }
    string addStrings(string num1, string num2) {
        string ans = "";
        solve(num1, num2, num1.length() - 1, num2.length() - 1, ans, 0);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        int sign = 1; //positive by default
        int i = 0;
        int ans = 0;
        

        //ignoring white spaces
        while(s[i] == ' '){
            i++;
        }

        //reading sign
        if(i < n && (s[i] == '-' || s[i] == '+')){
            sign = s[i] == '+' ? 1 : -1;
            i++;
        }

        //reading numbers
        while(i < n && isdigit(s[i])){
            if(ans > INT_MAX/10 || (ans == INT_MAX / 10 && s[i] > '7')){
                return sign == -1 ? INT_MIN : INT_MAX;
            }

            ans = ans * 10 + (s[i] - '0');
            i++;
        }

        return sign * ans;
    }
};

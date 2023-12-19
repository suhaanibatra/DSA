class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;

        int x_cpy = abs(x);
        int rev = 0;

        while(x_cpy){
            int rem = x_cpy % 10;
            if(rev > INT_MAX/10 || rev < INT_MIN/10) return false;

            rev = rev*10 + rem;
            x_cpy /= 10;
        }

        return x == rev;
    }
};

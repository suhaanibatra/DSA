class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.length();

        //storing the frequency of bits
        int hash[2] = {0};

        for(char ch: s){
            hash[ch - '0']++;
        }

        // for(int i = 0; i < 2; i++){
        //     cout << i << " -> " << hash[i] << endl;
        // }

        int index = 0;
        s[n - 1] = '1';
        hash[1]--;

        while(hash[1] != 0 && index < n - 1){
            s[index++] = '1';
            hash[1]--;
        }

        while(hash[0] != 0 && index < n - 1){
            s[index++] = '0';
            hash[0]--;
        }
        // cout << s << endl;
        return s;
    }
};

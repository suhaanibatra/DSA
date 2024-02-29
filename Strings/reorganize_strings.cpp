class Solution {
public:
    string reorganizeString(string s) {
        int len = s.length();
        string ans = "";
        //storing the hash
        int hash[26] = {0};

        for(char ch: s){
            hash[ch - 'a']++;
        }

        // for(int i = 0; i < 26; i++){
        //     cout << char(i + 'a') << "  " << hash[i] << endl;
        // }
        
        //finding the max occurring character
        char maxChar;
        int maxFreq = INT_MIN;

        for(int i = 0; i < 26; i++){
            if(hash[i] > maxFreq){
                maxChar = i + 'a';
                maxFreq = hash[i];
            }
        }

        // cout << "Max occurring character = " << maxChar << " freq = " << maxFreq << endl;

        //placing the most occurring character
        int index = 0;
        while(maxFreq != 0 && index < len){
            s[index] = maxChar;
            index += 2;
            maxFreq--;
        }

        // cout << s << endl;

        if(maxFreq != 0){
            return ""; //exit condition
        }

        hash[maxChar - 'a'] = 0;

        // for(int i = 0; i < 26; i++){
        //     cout << char(i + 'a') << "  " << hash[i] << endl;
        // }

        //place the remaining characters
        for(int i = 0; i < 26; i++){
            while(hash[i] > 0){
                index = index >= s.size() ? 1 : index;
                s[index] = i + 'a';
                cout << s << endl;
                hash[i]--;
                index += 2;
            }
        }

        return s;
    }
};

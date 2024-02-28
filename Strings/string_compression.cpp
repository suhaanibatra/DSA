class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int index = 0;

        int size = chars.size();

        while(i < size){
            int j = i + 1;

            while(j < size && chars[i] == chars[j]){
                j++;
            }

            int count = j - i;
            //store the character
            chars[index] = chars[i];
            index++;

            //check if frequency > 1
            if(count > 1){
                string cnt = to_string(count);
                for(char ch: cnt){
                    chars[index++] = ch;
                }
            }

            i = j;
        }

        for(auto ch: chars){
            cout << ch;
        }
        return index;
    }
};

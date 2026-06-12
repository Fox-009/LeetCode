class Solution {
public:
    int compress(vector<char>& chars) {
        int idx = 0;
        for(int i = 0; i<chars.size();){
            int count = 0;
            char ch = chars[i];
            while(i<chars.size() && chars[i] == ch){
                count++;
                i++;
            }
            if (count == 1) chars[idx++] = ch;
            else{
                string s = to_string(count);
                chars[idx++] = ch;
                for(char st : s){
                    chars[idx++] = st;
                }
            }
        }
        return idx;
    }
};
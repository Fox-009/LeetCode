class Solution {
public:
    int lengthOfLastWord(string s) {
        string word, last;
        stringstream ss(s);
        while (ss >>word){
            last = word;
        }
        return last.size();
    }
};
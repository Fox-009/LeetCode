class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size()-1;
        if (s.size() != goal.size()) return false;
        if (s == goal) return true;
        while(n>0){
            char ch = s.back();
            s.pop_back();
            s = ch+s;
            if(s == goal) return true;
            n--;
        }
        return false;
    }
};
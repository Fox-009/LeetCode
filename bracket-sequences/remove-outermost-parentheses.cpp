class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt = 0;
        string ans;
        for(char ch : s){
            if (ch == ')'){
                cnt--;
            }
            if(cnt>0) ans+=ch;
            if (ch == '('){
                cnt++;
            }
        }
        return ans;   
    }
};
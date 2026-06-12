class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s.size() != t.size()) return false;
        vector<int>check(258,0);
        for(int i = 0; i<s.size();i++){
            check[s[i]]++;
        }
        for(int i = 0; i<s.size();i++){
            if(check[s[i]] != check[t[i]]) return false;
        }
        return true;
    }
};
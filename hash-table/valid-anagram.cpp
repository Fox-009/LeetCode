class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>v1(258,0);
        vector<int>v2(258,0);
        if(s.size() != t.size()) return false;
        for(int i = 0; i<s.size();i++){
            v1[(unsigned char)s[i]]++;
            v2[(unsigned char)t[i]]++;
        }
        return v1 == v2;
    }
};
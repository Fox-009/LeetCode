class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi = 0;
        for(int i = 0;i<s.size();i++){
            vector<int>mpp(256,0);
            for(int j  = i;j<s.size();j++){
                if (mpp[s[j]] == 1){
                    break;
                }
                maxi = max(maxi,j-i+1);
                mpp[s[j]] = 1;
            }
        }
        return maxi;
    }
};
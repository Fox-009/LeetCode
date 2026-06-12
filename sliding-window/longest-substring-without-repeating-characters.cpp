class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi = 0;
        for(int i = 0; i<s.size()-1;i++){
            vector<int>mpp(265,0);
            for(int j = i; j<s.size()-1;j++){
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
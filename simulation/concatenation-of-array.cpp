class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;                    // Copy once
        ans.insert(ans.end(), nums.begin(), nums.end());  // Append again
        return ans;
    }
};
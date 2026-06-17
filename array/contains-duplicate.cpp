class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hash;

        for(auto x : nums) {
            if(hash.find(x) != hash.end())
                return true;

            hash.insert(x);
        }
        return false;
    }
};
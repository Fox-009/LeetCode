class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>v1;
        sort(nums.begin(),nums.end());
        for(int i = 0; i<nums.size();i++){
            if(nums[i] != (i+1)){
                v1.push_back(nums[i]);
                v1.push_back(i+1);
            }
        }
        return v1;
    }
};
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>v1;
        for(int i = 0; i<nums.size();i++){
            if(nums[i] == nums[i+1]){
                v1.push_back(nums[i]);
                v1.push_back(nums[i]+1);
                break;
            }
        }
        return v1;
    }
};
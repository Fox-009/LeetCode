class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int>v1;
    for(int i = 0; i<nums.size();i++){
        int count = 0;
        for(int j = 0; j<nums.size();j++){
            if(nums[i]>nums[j]){
                count++;
            }
        }
        v1.push_back(count);
        }
        return v1; 
    }
};
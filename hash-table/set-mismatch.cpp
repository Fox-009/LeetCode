class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int>mpp;
        vector<int>v1;
        sort(nums.begin(),nums.end());
        for(int i = 0; i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int duplicate ;
        for(auto it : mpp){
            if (it.second == 2){
                v1.push_back(it.first);
            }
        }
        for(int i = 0; i<nums.size();i++){
            if (nums[i] != i+1){
                v1.push_back(i+1);
            }
        }
        return v1;
    }
};
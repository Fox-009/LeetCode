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
        for(int i = 1; i<=nums.size();i++){
            if (mpp[i] == 2){
                v1.push_back(i);
            }
            if (mpp[i] == 0){
                v1.push_back(i);
            }
        }
        return v1;
    }
};
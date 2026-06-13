class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int>mpp;
        for(int i = 0; i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int duplicate ;
        int missing ;
        for(int i = 1; i<=nums.size();i++){
            if (mpp[i] == 0){
                missing = i;
            }
            if (mpp[i] == 2){
                duplicate = i;
            }
        }
        return {duplicate,missing};
    }
};
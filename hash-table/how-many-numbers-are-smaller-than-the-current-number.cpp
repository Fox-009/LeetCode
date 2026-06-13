class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>temp = nums;
        sort(temp.begin(),temp.end());
        map<int,int>mpp;
        for(int i = 0; i<nums.size();i++){
            if(mpp.find(temp[i]) == mpp.end())
            {
                mpp[temp[i]] = i;
            }
        }
        vector<int>ans;
        for(int x: nums){
            ans.push_back(mpp[x]);
        }
        return ans;
    }
};
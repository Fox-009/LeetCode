class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>x;
        vector<int>y;
        for(int i = 0; i< n ; i++){
            x.push_back(nums[i]);
        }
        for(int i = n; i<nums.size() ; i++){
            y.push_back(nums[i]);
        }
        int i  = 0;
        int j = 0;
        vector<int>v1;
        while (i<x.size() && j< y.size()){
            v1.push_back(x[i]);
            i++;
            v1.push_back(y[j]);
            j++;
        }
        return v1;
    }
};
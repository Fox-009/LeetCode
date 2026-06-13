class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       vector<int>suffled(2*n,0);
       for(int i = 0;i< n;i++){
        suffled[2*i] = nums[i];
        suffled[2*i + 1] = nums[n+i];
       }
       return suffled;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;
        for(auto x : nums){
            if (count == 0){
                candidate = x;
            }
            else if(x == candidate){
                count++;
            }
            else{
                count--;
            }
        }
        count = 0;
        for(auto x : nums){
            if (candidate == x) count++;
        }
        if (count >= nums.size()/2) return candidate;
        return -1;
    }
};
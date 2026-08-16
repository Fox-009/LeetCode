class Solution {
public:
    int lower(vector<int> &nums, int target){
        int low = 0;
        int high = nums.size()-1;
        while(low <= high){
            int mid = low + (high - low )/2;
            if (nums[mid] >= target) high = mid-1;
            else low = mid+1;
        }
        return low;
    }

    int Upper(vector<int> &nums, int target){
        int low = 0;
        int high = nums.size()-1;
        while(low <= high){
            int mid = low + (high - low )/2;
            if (nums[mid] > target) high = mid-1;
            else low = mid+1;
        }
        return low;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
        if (nums.empty()) return ans;
        int it1 = lower(nums,target);
        if(it1 >= nums.size() || nums[it1] != target) return ans;
        int it2 = Upper(nums,target) - 1;
        ans[0] = it1;
        ans[1] = it2;
        return ans;
    }
};
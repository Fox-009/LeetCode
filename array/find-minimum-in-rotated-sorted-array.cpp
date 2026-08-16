class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int target = INT_MAX;
        while (low <= high){
            int mid = low + (high - low)/2;

            if (nums[low] < nums[high]) return nums[low];
            else if (nums[low] < nums[high]) {
                target = min(target, nums[low]);
                break;
            }
            else{
                target = min(target, nums[mid]);
                high = mid - 1;
            }
        }
        return target;
    }
};
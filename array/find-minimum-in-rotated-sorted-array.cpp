class Solution {
public:
    int findMin(vector<int> &nums)
    {
    int target = INT_MAX;
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if(nums[low]<=nums[high]){
            target = min(target,nums[low]);
            break;
        }
        if(nums[low]<= nums[mid]){
            target = min(nums[low], target);
            low = mid+1; 
        }
        else{
            target = min(nums[mid],target);
            high = mid - 1;
        }
    }
    return target;
    }
};
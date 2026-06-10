class Solution {
public:
    bool possible(vector<int>& nums, int mid, int threshold) {
    long long cnt = 0;
    for (int x : nums) {
        cnt += (x + mid - 1) / mid;
        if (cnt > threshold)
            return false;
        }
        return true;
    }
    int smallestDivisor(vector<int>& nums, long long threshold) {
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        while(low <= high){
            long long mid = low + (high - low)/2;
            if(possible(nums,mid,threshold)){
                high = mid - 1;
            }
            else{
                low = mid +1;
            }
        }
        return low;
    }
};
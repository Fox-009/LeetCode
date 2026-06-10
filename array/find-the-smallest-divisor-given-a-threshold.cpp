class Solution {
public:
    bool possible(vector<int>&nums,long long mid,long long threshold){
        long long cnt = 0;
        for( int it : nums){
            cnt += (it+mid-1)/mid;
        }
        if (cnt <= threshold) return true;
        else return false;
    }
    int smallestDivisor(vector<int>& nums, long long threshold) {
        int low = 0;
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
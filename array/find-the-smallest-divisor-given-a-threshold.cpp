class Solution {
public:
    bool possible(vector<int>&nums,int mid,int threshold){
        long long cnt = 0;
        for( int it : nums){
            cnt += (it+mid-1)/mid;
        }
        if (cnt <= threshold) return true;
        else return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 0;
        int high = *max_element(nums.begin(),nums.end());
        while(low <= high){
            int mid = low + (high - low)/2;
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
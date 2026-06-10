class Solution {
public:
    bool Ispossible(vector<int>& nums, long long weight, int days) {
    long long total = 0;
    int day = 1;

    for (int it : nums) {
        if (total + it > weight) {
            day++;
            total = it;

            if (day > days)
                return false;
        } else {
            total += it;
        }
    }

    return true;
}
    int shipWithinDays(vector<int>& weights, int days) {
        long long low = *max_element(weights.begin(),weights.end());
        long long high = accumulate(weights.begin(), weights.end(), 0);
        while(low <= high){
            long long mid = low + (high -low)/2;
            if (Ispossible(weights,mid,days)){
                high = mid - 1;
            }
            else low = mid+1;
        }
        return low;
    }
};
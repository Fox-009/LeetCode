class Solution {
public:
    bool Ispossible(int mid,  vector<int>&nums, int k){
        int s = 1;
        int total = 0;
        for(int it : nums){
            if (total + it > mid){
                s++;
                if( s > k) return false;
                total = it;
            }
            else{
                total+=it;
            }
        }
        return s<= k;
    }
    
    int splitArray(vector<int>& nums, int k) {
    int low = *max_element(nums.begin(),nums.end());
    long long high = accumulate(nums.begin(),nums.end(),0LL);
    while( low <= high ){
        long mid = low +(high - low )/2;
            if (Ispossible(mid,nums,k)){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};
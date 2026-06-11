class Solution {
public:
    bool Ispossible(vector<int>&nums,long long mid,int k){
        long long total = 0;
        int s = 1;
        for(int it : nums){
            if(total + it > mid){
                s++;
                if(s>k) return false;
                total = it;
            }
            else{
                total+=it;
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        long long high = accumulate(nums.begin(),nums.end(),0LL);
        while(low <= high){
            int mid = low+(high-low)/2;
            if(Ispossible(nums,mid,k)){
                high = mid - 1;
            }
            else{
                low = mid +1;
            }
        }
        return low;
    }
};
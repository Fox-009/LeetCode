class Solution {
public:
    bool canplace(vector<int>&nums,long long maxmindistance , int ball){
        int cnt= 1;
        int last = nums[0];
        for(int i = 1; i<nums.size();i++){
            if (nums[i] - last >= maxmindistance){
                cnt++;
                last = nums[i];
                if(cnt>= ball) return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& nums, int m) {
        sort(nums.begin(),nums.end());
        int low = 1;
        int high = nums.back() - nums.front();
        while (low <= high){
            long long mid = low + (high - low)/2;
            if (canplace(nums,mid,m)){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return high;
    }
};
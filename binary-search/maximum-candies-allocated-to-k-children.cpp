class Solution {
public:
    long long f(vector<int>&candies,int mid){
        long long total = 0;
        for( int candy : candies){
            total += candy/mid;
        }
        return total;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        long long long sun = 0;
        for(int it : candies){
            sun+=it;
        }
        if (sun<k) return 0;
        int low = 1;
        int high = *max_element(candies.begin(),candies.end());
        while(low<= high){
            int mid = low + (high-low)/2;
            long long val = f(candies,mid);
            if(val>=k){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return high;
    }
};
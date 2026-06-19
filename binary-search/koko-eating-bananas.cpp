class Solution {
public:
    bool Check(int mid, vector<int>& piles, int h) {
    long long hours = 0;

    for(auto x : piles) {
        hours += (x + mid - 1) / mid;

        if(hours > h)
            return false;
    }

    return true;
}
    int minEatingSpeed(vector<int>& piles, int h) {
          int high = *max_element(piles.begin(),piles.end());
          int low = 1;
          while(low <= high){
            int mid = low + (high-low)/2;
            if(Check(mid,piles,h)){
                high = mid - 1;
            }
            else{
                low = mid +1;
            }
          }  
    return low;
    }
}; 
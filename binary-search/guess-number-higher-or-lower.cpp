
class Solution {
public:
    int guessNumber(int n) {
        long long i = 0;
        long long j = n;
        while(i<=j){
            int mid = i+(j-i)/2;
            int result = guess(mid);
            if(result == 0) return mid;
            else if (result == 1) i = mid+1;
            else j = mid-1;
        }
        return -1;
    }
};
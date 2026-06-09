class Solution {
public:
    long long calculateTotalHours(vector<int>& piles, int hourly) {
        long long totalHours = 0;

        for (int pile : piles) {
            totalHours += (pile + hourly - 1LL) / hourly;
        }

        return totalHours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low <= high) {
            int mid = low + (high - low) / 2;

            long long totalH = calculateTotalHours(piles, mid);

            if (totalH <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};
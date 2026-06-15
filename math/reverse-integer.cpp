class Solution {
public:
    int reverse(int x) {
        long long s = x;
        long long r = 0;

        if (s < 0)
            s = -s;

        while (s > 0) {
            int digit = s % 10;
            r = r * 10 + digit;
            s /= 10;
        }

        if (x < 0)
            r = -r;

        if (r > INT_MAX || r < INT_MIN)
            return 0;

        return (int)r;
    }
};
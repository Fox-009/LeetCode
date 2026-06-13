class Solution {
public:
    string addStrings(string num1, string num2) {
        long long x = stoi(num1);
        long long y = stoi(num2);
        long long z = x+y;
        string s = to_string(z);
        return s;
    }
};
class Solution {
public:
    string addStrings(string num1, string num2) {
        int x = stoi(num1);
        int y = stoi(num2);
        int z = x+y;
        string s = to_string(z);
        return s;
    }
};
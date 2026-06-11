class Solution {
public:
    string largestGoodInteger(string num) {
        if(num.size()<3) return "";
        for(int i = 9;i>=0;i--){
            for(int j = num.size()-2;j>=1;j--){
                if (num[j] == num[j - 1] &&
                    num[j] == num[j + 1] &&
                    (num[j] - '0') == i){
                    return num.substr(j-1,3);
                }
            }
        }
        return "";
    }
};
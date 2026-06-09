class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mpp={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int sum = 0;
        int prev = 0;
        for(int it = s.size()-1;it>=0;it--){
            int current = mpp[s[it]];
            if (current<prev){
                sum -= current;
            }
            else{
                sum+=current;
            }
            prev = current;
        }
        return sum;
    }
};
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = 0;
        for(int i = 0; i<digits.size();i++){
            n = n*10 + digits[i];
        }
        n = n +1;
        vector<int>ans;
        while(n>=0){
            long long x = n%10;
            ans.insert(ans.begin(),x);
            n = n/10;
        }
        return ans;
    }
};
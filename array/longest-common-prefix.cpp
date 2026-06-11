class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        if(arr.empty()) return "";
        string ans;
        for(int i = 0; i<arr[0].size();i++){
            char ch = arr[0][i];
            for(int j = 1;j<arr.size();j++ ){
                if (i>= arr[j].size() || ch != arr[j][i]){
                    return ans;
                }
            }
            ans+=ch;
        }
        return ans;
    }
};
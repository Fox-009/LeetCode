class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
    sort(arr.begin(),arr.end());
    string ans;
    for(int i = 0; i<arr[0].size();i++){
        char ch = arr[0][i];
        if(i>= arr[arr.size()-1].size() || ch != arr[arr.size()-1][i]){
            return ans;
        }
        else{
            ans += ch;
        }
    }
    return ans;
    }
};
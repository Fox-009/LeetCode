class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int limit = arr.back()+k;
        vector<int>hash(limit+1,0);
        for(int i = 0; i<arr.size();i++) hash[arr[i]] = 1;
        int cnt = 0;
        for(int i = 1; i<hash.size();i++){
            if (hash[i] == 0){
                cnt++;
                if (cnt == k) return i;
            }
        }
        return -1;
    }
};
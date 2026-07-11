class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>neg;
        vector<int>pos;
        int n = nums.size();

        for(int i = 0 ; i<n;i++){
            if (nums[i]>=0){
                pos.push_back(nums[i]*nums[i]);
            }
            else {
                neg.push_back(nums[i]*nums[i]);
            }
        }
        reverse(neg.begin(),neg.end());
        if(neg.size() == 0){
            for(int i = 0; i<pos.size();i++){
                nums[i]=pos[i];
            }
            return nums;
        }
        else if(pos.size()== 0){
            for(int i =0;i<neg.size();i++){
                nums[i]= neg[i];
            }
            return nums;
        }
        
        else{
            int i=0,j=0,k = 0;
            while(i<n && j<pos.size() && k<neg.size()){
                if(neg[k]>pos[j]){
                    nums[i++] = pos[j++];
                    }
                else{
                    nums[i++]=neg[k++];
                    }
                }
            while(j<pos.size()){
                nums[i++] = pos[j++];
                }
            while(k<neg.size()){
                nums[i++] = neg[k++];
                }
            return nums;
        }
        return{-1};
    }
};
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0 ;
        int j = 0;
        int k = 0;
        vector<int>ans(n1+n2);
        while (i<n1 && j<n2){
            if(nums1[i]>nums2[j]){
                ans[k] = nums2[j];
                k++;
                j++;
            }
            else {
                ans[k] = nums1[i];
                k++;
                i++;
            }
        }
        while (i<nums1.size()){
            ans[k] = nums1[i];
            k++;
            i++;
        }
        while (j<nums2.size()){
            ans[k] = nums2[j];
            k++;
            j++;
        }
        if (k%2 == 0){
            return (ans[k/2 - 1] + ans[k/2])/2.00;
        }
        else return ans[k/2];
    }
};
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {

    *returnSize = numsSize;
    int* ans = (int*)malloc(numsSize * sizeof(int));
    int left=0,right=numsSize-1,idx = numsSize-1;
    while(left<=right){
        int leftsquare = nums[left]*nums[left];
        int rightsquare = nums[right]*nums[right];

        if (leftsquare>rightsquare){
            ans[idx--] = leftsquare;
            left++;
        }
        else{
            ans[idx--] = rightsquare;
            right--;
        }
    }
       return ans;
}
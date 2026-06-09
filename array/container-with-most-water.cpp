class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi = INT_MIN;
        int i = 0;
        int j = height.size() - 1;
        while (i<j){
            int h = min(height[i],height[j]);
            int w = j - i;
            maxi = max(maxi,h*w);
            if(height[i]<height[j]) i++;
            else j--;
        }
        return maxi;
    }
};
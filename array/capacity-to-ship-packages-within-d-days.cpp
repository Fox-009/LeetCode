#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canShip(const vector<int>& weights,int days,int capacity) 
    {
        int usedDays=1;
        int currentLoad=0;

        for(int w : weights)
        {
            if(currentLoad+w>capacity) 
            {
                usedDays++;
                currentLoad=0;
            }
            currentLoad+=w;
        }

        return usedDays<=days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int left=*max_element(weights.begin(),weights.end());
        int right=0;
        for(int w : weights) 
            right+=w;

        while(left<right) 
        {
            int mid=left+(right-left)/2;
            if(canShip(weights,days,mid)) 
            {
                right=mid;
            } 
            else
            {
                left=mid+1;
            }
        }
        return left;
    }
};
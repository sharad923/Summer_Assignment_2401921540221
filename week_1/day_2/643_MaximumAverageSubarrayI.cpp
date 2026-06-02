class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double windowsum=0;

        for(int i=0;i<k;i++)
        {
            windowsum+=nums[i];
        }

        double ans=windowsum;

        for(int i=1;i<=n-k;i++)
        {
            windowsum-=nums[i-1];
            windowsum+=nums[i+k-1];
            ans=max(ans,windowsum);
    }
        return ans/k;
    }
};
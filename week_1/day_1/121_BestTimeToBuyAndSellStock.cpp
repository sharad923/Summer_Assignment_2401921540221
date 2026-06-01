class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int idx=0;
        int ans=0;
        int maxi=0;
        int temp=prices[0];
        for(int i=1;i<n;i++)
        {
            if(prices[i]<temp)
            {
                temp=prices[i];
                idx=i;
            }
            ans=prices[i]-prices[idx];
            maxi=max(maxi,ans);
        }
        
        return maxi;
    
    }
};
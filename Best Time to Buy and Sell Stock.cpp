class Solution {
public:
    int maxProfit(vector<int>& nums) {
      
   int cost=0;
        int profit=0;
        int mini=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            cost=nums[i]-mini;
            profit=max(profit,cost);
            mini=min(mini,nums[i]);
        }
        return profit;
    }
};
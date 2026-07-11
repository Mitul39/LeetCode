class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int i;
        int n = prices.size();
        int ans = 0;
        int min = INT_MAX;
        
        for(i = 0 ; i<n ; i++){
            if(min > prices[i]){
                min = prices[i];
            }
            if(ans < prices[i]-min){
                ans = prices[i]-min;
            }
        }

        return ans;
    }
};
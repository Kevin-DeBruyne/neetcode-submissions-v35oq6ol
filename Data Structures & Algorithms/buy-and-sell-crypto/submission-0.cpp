class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>suf(n);
        int maxi=-1;
        for(int i=n-1;i>=0;i--){
            maxi=max(maxi, prices[i]);
            suf[i]=maxi;
        }
        int profit=0;
        for(int i=0;i<n-1;i++){
            profit=max(profit, suf[i+1]-prices[i]);
        }
        return profit;
    }
};

class Solution {
public:
    int help(vector<int>& coins, int amount, vector<int> &dp){
        if(amount==0){
            return 0;
        }
        if(amount<0){
            return 1e9;
        }
        if(dp[amount]!=-1){
            return dp[amount];
        }
        int res=1e9;
        
        for(int i=0;i<coins.size();i++){
            int ans=help(coins, amount-coins[i], dp)+1;
            res=min(ans, res);
        }
        dp[amount]=res;
        return dp[amount];

    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<int>dp(amount+1, -1);
        int ans=help(coins, amount, dp);
        if(ans==1e9){
            return -1;
        }
        else{
            return ans;
        }

    }
};

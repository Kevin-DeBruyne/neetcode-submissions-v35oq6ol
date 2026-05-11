class Solution {
public:
    int help(int amount, vector<int>& coins, int idx, vector<vector<int>>& dp){
        if(amount<0 || idx>coins.size()-1){
            return 0;
        }
        if(amount==0){
            return 1;
        }
        if(dp[amount][idx]!=-1){
            return dp[amount][idx];
        }
        int take=help(amount-coins[idx], coins, idx,dp);
        int notTake=help(amount, coins, idx+1,dp);
        return dp[amount][idx]=take+notTake;
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(5001, vector<int>(301, -1));
        return help(amount, coins, 0,dp);
    }
};
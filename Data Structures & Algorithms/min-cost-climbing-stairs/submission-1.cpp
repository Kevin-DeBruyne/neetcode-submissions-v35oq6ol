class Solution {
public:
    
    int help(vector<int>& cost,int n,int idx,vector<int>& dp){
        if(idx==n-1){
            return cost[n-1];
        }
        if(idx>n-1){
            return 0;
        }
        if(dp[idx]==-1){
            dp[idx]=min(help(cost,n,idx+2,dp)+cost[idx],help(cost,n,idx+1,dp)+cost[idx]);
        }
        return dp[idx];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        return min(help(cost,n,0,dp),help(cost,n,1,dp));
    }
};
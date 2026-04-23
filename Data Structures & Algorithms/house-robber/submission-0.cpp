class Solution {
public:
    int help(vector<int>& nums,int idx, int n,vector<int>& dp){
        if(idx>=n){
            return 0;
        }
        if(dp[idx]==-1){
            dp[idx]=max(help(nums,idx+2,n,dp)+nums[idx],help(nums,idx+1,n,dp));
        }
        
        return dp[idx];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return help(nums,0,n,dp);
    }
};

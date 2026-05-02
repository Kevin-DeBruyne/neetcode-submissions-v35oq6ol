class Solution {
public:
    int help(vector<int>& nums, int idx, int n, vector<int>&dp){
        if(idx>=n){
            return 0;
        }
        if(dp[idx]==-1){
            dp[idx]=max(help(nums, (idx+2),n, dp)+nums[idx], help(nums, (idx+1),n, dp));
        }
        return dp[idx];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        vector<int>dp1(n, -1);
        vector<int>dp2(n, -1);
        return max(help(nums, 0, n-1, dp1),help(nums, 1, n, dp2));
    }
};
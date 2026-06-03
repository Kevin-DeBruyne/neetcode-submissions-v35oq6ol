class Solution {
public:
    int res=INT_MIN;
    int help(vector<int>& nums, int idx, int prev, vector<vector<int>>& dp){
        if(idx==nums.size()){
            return 0;
        }
        if(dp[idx][prev+10001]!=-1){
            return dp[idx][prev+10001];
        }
        if(nums[idx]>prev){
            return dp[idx][prev+10001]=max(help(nums, idx+1, nums[idx], dp)+1, help(nums, idx+1, prev, dp));
        }
        else{
            return dp[idx][prev+10001]=help(nums, idx+1, prev, dp);
        }
    }
    int lengthOfLIS(vector<int>& nums) {
        int prev=-10001;
        vector<vector<int>> dp(2501, vector<int>(20002, -1));
        return help(nums, 0, prev, dp);
    }
};

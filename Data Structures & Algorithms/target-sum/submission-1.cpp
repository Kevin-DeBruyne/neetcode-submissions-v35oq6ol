class Solution {
public:
    int help(vector<int>& nums, int target, int idx,int sum,vector<vector<int>> &dp, int total){
        if(idx>=nums.size() && sum!=target){
            return 0;
        }
        if(idx==nums.size() && sum==target){
            return 1;
        }
        if(dp[total+sum][idx]!=-1){
            return dp[total+sum][idx];
        }
        int add=help(nums, target, idx+1,sum+nums[idx],dp ,total);
        int sub=help(nums, target, idx+1,sum-nums[idx],dp, total);
        return dp[total+sum][idx]=add+sub;;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int total=0;
        for(auto x:nums){
            total+=x;
        }
        // cout<<sum<<endl;
        vector<vector<int>> dp(2001, vector<int>(1001, -1));
        return help(nums, target, 0,0,dp, total);
    }
};
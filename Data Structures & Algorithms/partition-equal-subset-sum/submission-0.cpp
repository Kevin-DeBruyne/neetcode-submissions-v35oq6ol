class Solution {
public:
    bool help(vector<int>& nums, int idx,  int target, vector<vector<int>>& dp){
        if(target==0){
            return true;
        }
        if(idx>=nums.size() || target<0){
            return false;
        }
        if(dp[target][idx]!=-1){
            return dp[target][idx];
        }

        bool pick=help(nums, idx+1, target-nums[idx], dp);
        bool notPick=help(nums, idx+1, target, dp);
        dp[target][idx]=pick || notPick;
        return dp[target][idx];

    }
    bool canPartition(vector<int>& nums) {
        int total=0;
        for(auto x:nums){
            total+=x;
        }
        if(total%2!=0){
            return false;
        }
        int target=total/2;
        int idx=nums.size();
        vector<vector<int>> dp(target+1, vector<int>(idx+1, -1));
        return help(nums, 0, target, dp);
    }
};
class Solution {
public:
    int help(vector<int>& nums, int target, int idx,int sum){
        if(idx>=nums.size() && sum!=target){
            return 0;
        }
        if(idx==nums.size() && sum==target){
            return 1;
        }
        int add=help(nums, target, idx+1,sum+nums[idx]);
        int sub=help(nums, target, idx+1,sum-nums[idx]);
        return add+sub;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        
        return help(nums, target, 0,0);
    }
};
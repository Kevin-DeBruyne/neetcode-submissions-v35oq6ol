class Solution {
public:
    vector<vector<int>>ans;
    void help(vector<int> nums, int idx, vector<int>& temp){
        if(idx>=nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        help(nums, idx+1, temp);
        while(idx<nums.size()-1 && nums[idx]==nums[idx+1]){
            idx++;
        }
        temp.pop_back();
        help(nums, idx+1, temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>temp;
        sort(nums.begin(), nums.end());
        help(nums, 0, temp);
        return ans;
    }
};
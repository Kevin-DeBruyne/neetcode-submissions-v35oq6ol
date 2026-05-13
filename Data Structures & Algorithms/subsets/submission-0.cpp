class Solution {
public:
    set<vector<int>>ans;
    void help(vector<int> nums, int idx, vector<int>& temp){
        if(idx>=nums.size()){
            return;
        }
        temp.push_back(nums[idx]);
        help(nums, idx+1, temp);
        ans.insert(temp);
        temp.pop_back();
        help(nums, idx+1, temp);
        ans.insert(temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>res;
        help(nums, 0, temp);
        for(auto x:ans){
            res.push_back(x);
        }
        return res;
    }
};
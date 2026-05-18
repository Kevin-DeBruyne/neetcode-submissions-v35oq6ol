class Solution {
public:
    vector<vector<int>>ans;
    void help(vector<int>& temp, vector<bool>& used, vector<int>& nums){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(used[i]==true){
                continue;    
            }
            temp.push_back(nums[i]);
            used[i]=true;
            help(temp, used, nums);
            used[i]=false;
            temp.pop_back();
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>temp;
        vector<bool> used(nums.size(), false);
        help(temp, used, nums);
        return ans;
    }
};

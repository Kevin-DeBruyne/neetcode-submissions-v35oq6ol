class Solution {
public:
    vector<vector<int>>ans;
    void help(vector<int>& candidates, int target, int idx, vector<int>& temp){
        if(target<0 || idx>=candidates.size()){
            temp.pop_back();
            return;
        }
        if(target==0){
            ans.push_back(temp);
            temp.pop_back();
            return;
        }
        // cout<<target<<endl;
        temp.push_back(candidates[idx]);
        help(candidates, target-candidates[idx], idx, temp);
        help(candidates, target, idx+1, temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        help(candidates, target, 0, temp);
        return ans;
    }
};
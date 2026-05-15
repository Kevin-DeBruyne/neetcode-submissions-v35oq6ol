class Solution {
public:
    vector<vector<int>>ans;
    void help(vector<int>& candidates, int target, int idx, vector<int>& temp){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(target<0 || idx>=candidates.size()){
            return;
        }
        // 1. Base cases (Just check and return, absolutely NO popping here)

        // 2. "Take" Branch
        temp.push_back(candidates[idx]);
        help(candidates, target - candidates[idx], idx + 1, temp);
        temp.pop_back(); // Clean up the crime scene!
        // 3. "Not Take" Branch
        while(idx+1<candidates.size() && candidates[idx]==candidates[idx+1]){
            idx++;
        }
        help(candidates, target, idx + 1, temp);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>temp;
        sort(candidates.begin(), candidates.end());
        help(candidates, target, 0, temp);
        return ans;
    }
};
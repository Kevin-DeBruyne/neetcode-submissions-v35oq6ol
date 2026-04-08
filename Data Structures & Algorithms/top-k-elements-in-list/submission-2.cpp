class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        int n=nums.size();
        vector<vector<int>>v(n+1);
        for(auto x:mp){
            v[x.second].push_back(x.first);
        }
        vector<int>ans;
        for(int i=n;i>=0;i--){
            for(int j=0;j<v[i].size();j++){
                ans.push_back(v[i][j]);
                if(ans.size()==k){
                    return ans;
                }
            }
        }
    }
};

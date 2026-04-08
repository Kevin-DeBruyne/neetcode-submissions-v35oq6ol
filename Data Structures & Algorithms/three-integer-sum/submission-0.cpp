class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
		set<vector<int>>anst;
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
		for(int i=0;i<n;i++){
			unordered_set<int>st;
			int target=nums[i]*-1;
			for(int j=i+1;j<n;j++){
				if(st.find(target-nums[j])!=st.end()){
					anst.insert({nums[i], nums[j], target-nums[j]});
				}
				else{
					st.insert(nums[j]);
				}	
			}
		}
		for(auto x:anst){
			ans.push_back(x);
		}
		return ans;
    }
};

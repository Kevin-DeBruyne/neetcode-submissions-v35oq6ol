class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
		set<vector<int>>anst;
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
		for(int i=0;i<n;i++){
			int x=i+1;
			int y=n-1;
			int target=nums[i]*(-1);
			while(x<y){
				if(nums[x]+nums[y]>target){
                	y--;
            	}
            	else if(nums[x]+nums[y]<target){
                	x++;
            	}
            	else{
                	anst.insert({nums[i], nums[x], nums[y]});
					x++;
					y--;
            	}
			}
		}
		for(auto x:anst){
			ans.push_back(x);
		}
		return ans;
    }
};

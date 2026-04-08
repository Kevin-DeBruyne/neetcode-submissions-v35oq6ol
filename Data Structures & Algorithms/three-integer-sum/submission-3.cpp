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
			if (i > 0 && nums[i] == nums[i - 1]) continue;
			while(x<y){
				if(nums[x]+nums[y]>target){
                	y--;
            	}
            	else if(nums[x]+nums[y]<target){
                	x++;
            	}
            	else{
                	ans.push_back({nums[i], nums[x], nums[y]});
					x++;
					y--;
					while (x < y && nums[x] == nums[x - 1]) {
                        x++;
                    }
            	}
			}
		}
		// for(auto x:anst){
		// 	ans.push_back(x);
		// }
		return ans;
    }
};

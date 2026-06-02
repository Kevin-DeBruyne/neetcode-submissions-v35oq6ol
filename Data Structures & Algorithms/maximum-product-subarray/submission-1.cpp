class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=nums[0];
        int mini=nums[0];
        int res=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            cout<<mini<<endl;
            int temp=maxi;
            maxi=max({nums[i], nums[i]*temp, nums[i]*mini});
            mini=min({nums[i], nums[i]*mini, nums[i]*temp});
            res=max({maxi, res});
            
        }
        return res;
    }
};
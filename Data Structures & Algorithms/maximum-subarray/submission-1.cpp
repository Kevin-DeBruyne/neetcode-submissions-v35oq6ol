class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int runsum=0;
        int n=nums.size();
        int ans=nums[0];
        for(int i=0;i<n;i++){
            // cout<<runsum<<endl;
            if(runsum<0){
                runsum=nums[i];
            }
            else{
                runsum+=nums[i];
            }
            ans=max(runsum, ans);
        }
        ans=max(runsum, ans);
        return ans;
    }
};

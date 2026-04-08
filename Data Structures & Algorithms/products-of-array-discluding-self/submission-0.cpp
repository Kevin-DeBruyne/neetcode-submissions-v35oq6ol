class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>suffix(n);
        vector<int>prefix;
        vector<int>ans;
        int pre=1;
        int suf=1;
        for(auto x:nums){
            pre*=x;
            prefix.push_back(pre);
        }
        for(int i=n-1;i>=0;i--){
            suf*=nums[i];
            suffix[i]=suf;
        }
        for(int i=0;i<n;i++){
            int t=1;
            if(i-1>=0){
                t*=prefix[i-1];
            }
            if(i+1<n){
                t*=suffix[i+1];
            }
            ans.push_back(t);
        }
        return ans;
    }
};

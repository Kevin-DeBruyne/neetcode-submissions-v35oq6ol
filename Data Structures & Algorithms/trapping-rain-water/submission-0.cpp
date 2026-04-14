class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>prefix;
        vector<int>suffix;
        int pre=0;
        int suff=0;
        int n=height.size();
        for(int i=0;i<n;i++){
            pre=max(pre, height[i]);
            prefix.push_back(pre);
        }
        for(int i=n-1;i>=0;i--){
            suff=max(suff, height[i]);
            suffix.push_back(suff);
        }
        // for(auto x:prefix){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        reverse(suffix.begin(), suffix.end());
        // for(auto x:suffix){
        //     cout<<x<<" ";
        // }
        int res=0;
        for(int i=0;i<n;i++){
            res+=max(0,min(prefix[i], suffix[i])-height[i]);
        }
        return res;
    }
};

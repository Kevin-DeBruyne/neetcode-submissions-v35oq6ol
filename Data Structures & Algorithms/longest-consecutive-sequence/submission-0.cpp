class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for(auto x:nums){
            st.insert(x);
        }
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int cnt=1;
            int t=nums[i];
            if(st.find(t-1)==st.end()){
                while(st.find(t+1)!=st.end()){
                    t++;
                    cnt++;
                }
                ans=max(ans, cnt);
            }
        }
        return ans;
    }
};

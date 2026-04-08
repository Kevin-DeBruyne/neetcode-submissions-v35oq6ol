class Solution {
public:
    int lengthOfLongestSubstring(string s) {
                int l=0;
        int r=0;
        int n=s.size();
        int ans=0;
        map<char, int>mp;
        while(l<n && r<n){
            if(mp.find(s[r])==mp.end()){
                mp[s[r]]++;
                r++;
            }
            else{
                while(mp.find(s[r])!=mp.end()){
                    mp[s[l]]--;
                    if(mp[s[l]]==0){
                        mp.erase(s[l]);
                    }
                    l++;
                }
            }
            int sz=mp.size();
            ans=max(ans, sz);
        }
        int sz=mp.size();
        ans=max(ans, sz);
        return ans;
    }
};

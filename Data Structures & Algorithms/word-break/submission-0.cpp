class Solution {
public:
    bool help(string s, int start, set<string> &st, vector<int>&dp){
        if(start==s.size()){
            return true;
        }
        if(dp[start]!=-1){
            return dp[start];
        }
        for(int i=start;i<s.size();i++){
            int l=i-start+1;
            string word=s.substr(start, l);
            // cout<<l<<endl;
            // cout<<word<<endl;
            if(st.find(word)!=st.end()){
                if(help(s, i+1, st, dp)){
                    return dp[start]=1;
                };
            }
        }
        return dp[start]=0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string>wd;
        for(auto x:wordDict){
            wd.insert(x);
        }
        vector<int>dp(s.size(), -1);
        return help(s, 0, wd, dp);
    }
};
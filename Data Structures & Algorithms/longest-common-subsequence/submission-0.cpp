class Solution {
public:
    int maxi=INT_MIN;
    int help(string t1, string t2, int i, int j, vector<vector<int>>& dp){
        if(i>=t1.size() || j>=t2.size()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        if(t1[i]==t2[j]){
            // res++;
            return dp[i][j]=help(t1, t2, i+1, j+1, dp)+1;
            
        }
        else{

            return dp[i][j]=max(help(t1, t2, i+1, j, dp), help(t1, t2, i, j+1, dp));
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
        int i=0;
        int j=0;
        vector<vector<int>> dp(1001, vector<int>(1001, -1));
        // help(text1, text2, 0, 0, 0, dp);

        return help(text1, text2, 0, 0, dp);
    }
};

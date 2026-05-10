class Solution {
public:
    int help(int d, int r, vector<vector<int>> &dp){
        if(d<0 || r<0){
            return 0;
        }
        if(d==0 && r==0){
            return 1;
        }
        if(dp[d][r]!=-1){
            return dp[d][r];
        }
        int right=help(d, r-1,dp);
        int down=help(d-1, r,dp);
        dp[d][r]=right+down;
        return dp[d][r];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(101, vector<int>(101, -1));
        return help(m-1, n-1, dp);
    }
};
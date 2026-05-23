class Solution {
public:
    int help(string w1, string w2, int i, int j, vector<vector<int>>& dp){
        if(i>=w1.size()){
            return w2.size()-j;
        }
        if(j>=w2.size()){
            return w1.size()-i;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(w1[i]==w2[j]){
            return dp[i][j]=help(w1, w2, i+1, j+1, dp);
        }
        else{
            int ins=help(w1, w2, i+1, j, dp)+1;
            int del=help(w1, w2, i, j+1, dp)+1;
            int rep=help(w1, w2, i+1, j+1, dp)+1;
            int temp=min(ins, del);
            return dp[i][j]=min(temp, rep);
        }
    }
    int minDistance(string w1, string w2) {
        int i=0;
        int j=0;
        vector<vector<int>> dp(101, vector<int>(101, -1));
        return help(w1, w2, i, j, dp);
    }
};

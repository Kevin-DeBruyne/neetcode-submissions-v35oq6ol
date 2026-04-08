class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int x=1;
        // int i=0;
        int j=0;
        int k=0;
        for(int i=0;i<n;i++){
            for(j=k;j<n;j++){
                cout<<i<<":"<<j<<endl;
                // cout<<j<<":"<<i<<endl;
                swap(matrix[i][j], matrix[j][i]);
            }
            if(k<n){
                k++;
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
    }
};

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<char>dir{'R', 'D', 'L', 'U'};
        int ptr=0;
        vector<int>ans;
        int n=matrix.size();
        int m=matrix[0].size();
        int total=m*n;
        int i=0;
        int j=0;
        cout<<m<<":"<<n<<endl;
        while(true){
            cout<<total<<endl;
            if(total<=0){
                break;
            }
            if(dir[ptr]=='R'){
                // cout<<matrix[i][j]<<" ";
                if(matrix[i][j]!=-1001){
                    ans.push_back(matrix[i][j]);
                }
                matrix[i][j]=-1001;
                j++;
                total--;
                if(j>=m || matrix[i][j]==-1001){
                    j--;
                    i++;
                    ptr++;
                    ptr=ptr%4;
                }
            }
            else if(dir[ptr]=='D'){
                // cout<<matrix[i][j]<<" ";
                if(matrix[i][j]!=-1001){
                    ans.push_back(matrix[i][j]);
                }                
                matrix[i][j]=-1001;
                i++;
                total--;
                if(i>=n || matrix[i][j]==-1001){
                    i--;
                    j--;
                    ptr++;
                    ptr=ptr%4;
                }
            }
            else if(dir[ptr]=='L'){
                // cout<<matrix[i][j]<<" ";
                if(matrix[i][j]!=-1001){
                    ans.push_back(matrix[i][j]);
                }
                matrix[i][j]=-1001;
                j--;
                total--;
                if(j<0 || matrix[i][j]==-1001){
                    j++;
                    i--;
                    ptr++;
                    ptr=ptr%4;
                }
            }
            else if(dir[ptr]=='U'){
                // cout<<matrix[i][j]<<" ";
                if(matrix[i][j]!=-1001){
                    ans.push_back(matrix[i][j]);
                }
                matrix[i][j]=-1001;
                i--;
                total--;
                if(i<0 || matrix[i][j]==-1001){
                    i++;
                    j++;
                    ptr++;
                    ptr=ptr%4;
                }
            }                                    
        }
        return ans;
    }
};

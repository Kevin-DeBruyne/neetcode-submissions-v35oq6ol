class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        {
        int n=board.size();
        for(int i=0;i<n;i++){
            set<int>st;
            for(int j=0;j<n;j++){
                // cout<<board[i][j]<<" ";
                if(st.find(board[i][j])!=st.end()){
                    return false;
                }
                else if(board[i][j]!='.'){
                    st.insert(board[i][j]);
                }
            }
            // cout<<endl;
        }
        // cout<<"yaha tak pahucha?"<<endl;
        for(int i=0;i<n;i++){
            set<int>st;
            for(int j=0;j<n;j++){
                // cout<<board[j][i]<<" ";
                if(st.find(board[j][i])!=st.end()){
                    return false;
                }
                else if(board[j][i]!='.'){
                    st.insert(board[j][i]);
                }
            }
            // cout<<endl;
        }
        unordered_set<int>st;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(st.find(board[i][j])!=st.end()){
                    return false;
                }
                else if(board[i][j]!='.'){
                    st.insert(board[i][j]);
                }
            }
        }
        st.clear();
        for(int i=3;i<6;i++){
            for(int j=0;j<3;j++){
                if(st.find(board[i][j])!=st.end()){
                    return false;
                }
                else if(board[i][j]!='.'){
                    st.insert(board[i][j]);
                }
            }
        }
        st.clear();
        for(int i=6;i<9;i++){
            for(int j=0;j<3;j++){
                if(st.find(board[i][j])!=st.end()){
                    return false;
                }
                else if(board[i][j]!='.'){
                    st.insert(board[i][j]);
                }
            }
        }
        st.clear();
        for(int i=0;i<3;i++){
            for(int j=3;j<6;j++){
                if(st.find(board[i][j])!=st.end()){
                    return false;
                }
                else if(board[i][j]!='.'){
                    st.insert(board[i][j]);
                }
            }
        }
        st.clear();
        for(int i=3;i<6;i++){
            for(int j=3;j<6;j++){
                if(st.find(board[i][j])!=st.end()){
                    return false;
                }
                else if(board[i][j]!='.'){
                    st.insert(board[i][j]);
                }
            }
        }
        st.clear();
        for(int i=6;i<9;i++){
            for(int j=3;j<6;j++){
                if(st.find(board[i][j])!=st.end()){
                    return false;
                }
                else if(board[i][j]!='.'){
                    st.insert(board[i][j]);
                }
            }
        }
        st.clear();
        for(int i=0;i<3;i++){
            for(int j=6;j<9;j++){
                if(st.find(board[i][j])!=st.end()){
                    return false;
                }
                else if(board[i][j]!='.'){
                    st.insert(board[i][j]);
                }
            }
        }
        st.clear();
        for(int i=3;i<6;i++){
            for(int j=6;j<9;j++){
                if(st.find(board[i][j])!=st.end()){
                    return false;
                }
                else if(board[i][j]!='.'){
                    st.insert(board[i][j]);
                }
            }
        }
        st.clear();
        for(int i=6;i<9;i++){
            for(int j=6;j<9;j++){
                if(st.find(board[i][j])!=st.end()){
                    return false;
                }
                else if(board[i][j]!='.'){
                    st.insert(board[i][j]);
                }
            }
        }
        return true;
    }
    }
};

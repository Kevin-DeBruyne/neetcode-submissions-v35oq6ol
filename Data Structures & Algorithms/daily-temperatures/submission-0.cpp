class Solution {
public:
    // [2,2,1,3]
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        stack<pair<int,int>>st;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push({temp[i], i});
            }
            else{
                if(temp[i]<=st.top().first){
                    st.push({temp[i], i});
                }
                else{
                    while(!st.empty() && temp[i]>st.top().first){
                        ans[st.top().second]=i-st.top().second;
                        st.pop();
                    }
                    st.push({temp[i], i});
                }
            }
        }
        return ans;
    }
};

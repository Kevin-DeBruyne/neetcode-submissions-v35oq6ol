class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n=intervals.size();
        int i=0;
        stack<vector<int>>st;
        while(i<n){
            if(st.empty()){
                st.push(intervals[i]);
            }
            else if(intervals[i][0]>st.top()[1]){
                st.push(intervals[i]);
            }
            else if(intervals[i][0]<=st.top()[1] && intervals[i][1]>st.top()[1]){
                vector<int>top=st.top();
                st.pop();
                st.push({top[0], intervals[i][1]});
            }
            i++;
        }
        vector<vector<int>>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;

    }
};

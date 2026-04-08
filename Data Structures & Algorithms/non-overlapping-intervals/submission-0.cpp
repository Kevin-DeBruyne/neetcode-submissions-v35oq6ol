class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        for(auto x:intervals){
            for(auto y:x){
                cout<<y<<":";
            }
            cout<<endl;
        }
        stack<vector<int>>st;
        int i=0;
        int n=intervals.size();
        while(i<n){
            if(st.empty()){
                st.push(intervals[i]);
            }
            else if(intervals[i][0]<st.top()[1]){
                if(intervals[i][1]<st.top()[1]){
                    st.pop();
                    st.push(intervals[i]);
                }
            }
            else{
                st.push(intervals[i]);
            }
            i++;
        }
        return n-st.size();
    }
};
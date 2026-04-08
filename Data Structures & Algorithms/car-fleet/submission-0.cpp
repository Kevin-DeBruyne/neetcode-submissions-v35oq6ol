class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
                // stack<pair<int,int>>st;
        int ans=0;
        int n=speed.size();
        vector<float>time;
        vector<pair<int,int>>ps;
        stack<float>st;
        for(int i=0;i<n;i++){
            ps.push_back({position[i], speed[i]});
        }        
        sort(ps.begin(), ps.end());
        for(auto x:ps){
            cout<<x.first<<":"<<x.second<<endl;
        }
        for(int i=0;i<n;i++){
            time.push_back(float(target-ps[i].first)/float(ps[i].second));
        }
        for(auto x:time){
            cout<<x<<" ";
        }
        for(int i=n-1;i>=0;i--){
            if(st.empty()){
                st.push(time[i]);
            }
            else{
                if(time[i]>st.top()){
                    st.push(time[i]);
                }
            }
        }
        return st.size();
    }
};

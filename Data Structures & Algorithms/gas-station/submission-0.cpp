class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        vector<int>diff(n);
        for(int i=0;i<n;i++){
            diff[i]=gas[i]-cost[i];
        }
        int total=0;
        int local=0;
        for(auto x:diff){
            cout<<x<<" ";
            total+=x;
        }
        if(total<0){
            return -1;
        }
        int ans=-1;
        for(int i=0;i<n;i++){
            local+=diff[i];
            if(local<0){
                local=0;
            }
            else if(local-diff[i]==0){
                ans=i;
            }
        }
        
        return ans;
    }
};

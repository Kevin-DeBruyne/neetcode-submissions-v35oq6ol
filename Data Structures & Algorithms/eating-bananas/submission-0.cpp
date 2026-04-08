class Solution {
public:
    bool check(vector<int>& piles, int h, int k){
        int n=piles.size();
        long long time=0;
        for(int i=0;i<n;i++){
            if(piles[i]<=k){
                time++;
            }
            else{
                time+=piles[i]/k;
                if(piles[i]%k!=0){
                    time++;
                }
            }
            // cout<<time<<" ";
            // time=0;
        }
        if(time<=h){
            return true;
        }
        else{
            return false;
        }
    }
    int minEatingSpeed(vector<int>& piles, int h) {
    int low = 1, high = 1000000000;
    int ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        // cout<<low<<":"<<high<<":"<<mid<<endl;
        if (check(piles, h, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
    }
};

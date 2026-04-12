class Solution {
public:
    bool isNStraightHand(vector<int>& nums, int k) {
                int n=nums.size();
        map<int,int>mp;
        sort(nums.begin(), nums.end());
        for(auto x:nums){
            mp[x]++;
        }
        std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
        for(auto x:mp){
            minHeap.push(x.first);
        }
        if(n%k==0){
            while(!minHeap.empty()){
                int mini=minHeap.top();
                // cout<<mini<<endl;
                mp[mini]--;
                if(mp[mini]==0){
                    mp.erase(mini);
                    minHeap.pop();
                }
                for(int i=1;i<k;i++){
                    int num=mini+i;
                    // cout<<num<<endl;
                    if(mp.find(num)!=mp.end()){
                        mp[num]--;
                        if(mp[num]==0){
                            if(minHeap.top()==num){
                                minHeap.pop();
                            }
                            mp.erase(num);
                        }
                    }
                    else{
                        return false;
                    }
                }
                cout<<"*******"<<endl;

            }
        }   
        else{
            return false;
        }
        return true;
    }
};

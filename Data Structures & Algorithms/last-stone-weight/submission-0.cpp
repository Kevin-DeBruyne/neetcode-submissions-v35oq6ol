class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(auto x:stones){
            pq.push(x);
        }
        while(pq.size()>1){
            int lar=pq.top();
            pq.pop();
            int slar=pq.top();
            if(lar==slar){
                pq.pop();
            }
            else if(lar>slar){
                pq.pop();
                pq.push(lar-slar);
            }
        }
        if(pq.empty()){
            return 0;
        }
        return pq.top();
    }
};

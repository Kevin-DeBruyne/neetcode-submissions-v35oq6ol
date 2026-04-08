class Solution {
public:
    int findDist(vector<int>& vec){
        double total=vec[1]*vec[1]+vec[0]*vec[0];
        // cout<<sqrt(total)<<endl;
        return (total);
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        std::priority_queue<
    std::pair<int, std::vector<int>>,           // Data type
    std::vector<std::pair<int, std::vector<int>>>, // Underlying container
    std::greater<std::pair<int, std::vector<int>>> // Comparator for min-heap
> pq;
        for(auto x:points){
            pq.push({findDist(x), x});
        }
        vector<vector<int>>ans;
        while(!pq.empty() && k>0){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;

    }
};
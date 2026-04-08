/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        int n=intervals.size();
        vector<vector<int>>vec;
        for(auto x:intervals){
            vector<int>t;
            t.push_back(x.start);
            t.push_back(x.end);
            vec.push_back(t);
        }
        sort(vec.begin(), vec.end());
        for(int i=1;i<n;i++){
            // cout<<vec[i].start<<":"<<vec[i].end<<endl;
            if(vec[i][0]>=vec[i-1][1]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};

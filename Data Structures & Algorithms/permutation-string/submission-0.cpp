class Solution {
public:
    bool checkInclusion(string s1, string s2) {
                vector<int>vs1(26);
        vector<int>vs2(26);
        if(s2.size()<s1.size()){
            return false;
        }
        int n=s2.size();
        for(auto x:s1){
            vs1[x-97]++;
        }
        int l=0;
        int r=s1.size()-1;
        int i=0;
        while(i<=r){
            vs2[s2[i]-97]++;
            i++;
        }
        while(r<n){
            if(vs1==vs2){
                return true;
            }
            vs2[s2[l]-97]--;
            l++;
            r++;
            if(r<n){
                vs2[s2[r]-97]++;
            }
        }
        return false;
    }
};

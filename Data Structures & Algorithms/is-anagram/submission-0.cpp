class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int>mp1;
        map<int,int>mp2;
        for(auto x:s){
            mp1[x]++;
        }
        for(auto x:t){
            mp2[x]++;
        }
        if(mp1==mp2){
            return true;
        }
        else{
            return false;
        }
    }
};

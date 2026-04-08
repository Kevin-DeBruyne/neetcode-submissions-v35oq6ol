class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char, int>mp;
        int n=s.size();
        int l=0;
        int r=0;
        int maxi=-1;
        map<char, int>cnt;
        for(auto x:s){
            cnt[x]++;
        }
        char mFreq;
        int mCnt=0;
        for(auto x:cnt){
            if(x.second>mCnt){
                mCnt=x.second;
                mFreq=x.first;
            }
        }

        
        for(auto x:cnt){

        int defs=0;
        mFreq=x.first;
        // cout<<mFreq<<endl;
        int l=0;
        int r=0;
        while(l<n && r<n){
            // cout<<maxi<<endl;
            // cout<<l<<":"<<r<<endl;
            
            if(s[r]==mFreq){
                r++;
            }   
            else{
                defs++;
                if(defs>k){
                    maxi=max(maxi, r-l);
                    while(s[l]==mFreq){
                        l++;
                    }
                    l++;
                    defs--;
                    r++;
                }  
                else{
                    r++;
                }
            } 

        
        }

        maxi=max(maxi, r-l);
        }
        return maxi;
    }
};
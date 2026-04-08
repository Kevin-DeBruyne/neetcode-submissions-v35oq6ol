class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int i=0;
        int j=n-1;
        while(i<=j){
            // cout<<i<<"-"<<j<<endl;
            char l=tolower(s[i]);
            char r=tolower(s[j]);
            cout<<int(l)<<":"<<int(r)<<endl;
            if(int(l)<48 || int(l)>57 && int(l)<97 || int(l)>122){
                i++;
                continue;
            }
            if(int(r)<48 || int(r)>57 && int(r)<97 || int(r)>122){
                j--;
                continue;
            }
            if(l==r){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};

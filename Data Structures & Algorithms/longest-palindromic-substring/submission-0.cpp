class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int res=0;
        string ans="";
        for(int i=0;i<n;i++){
            int l=i;int r=i;
            while(l>=0 && r<=n-1 && s[l]==s[r]){
                string temp = s.substr(l, r - l + 1);
                if(temp.size()>ans.size()){
                    ans=temp;
                }
                // cout<<ans<<endl;
                l--;
                r++;
            }
            l=i; r=i+1;
            while(l>=0 && r<=n-1 && s[l]==s[r]){
                string temp = s.substr(l, r - l + 1);
                if(temp.size()>ans.size()){
                    ans=temp;
                }
                l--;
                r++;
            }
        }
        return ans;
    }
};

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int res=0;
        string ans;
        int start=0;
        int end=0;
        for(int i=0;i<n;i++){
            int l=i;int r=i;
            while(l>=0 && r<=n-1 && s[l]==s[r]){
                if(abs(l-r)>res){
                    res=abs(l-r);
                    start=l;
                    end=r;
                }
                // cout<<ans<<endl;
                l--;
                r++;
            }
            l=i; r=i+1;
            while(l>=0 && r<=n-1 && s[l]==s[r]){
                if(abs(l-r)>res){
                    res=abs(l-r);
                    start=l;
                    end=r;
                }
                l--;
                r++;
            }
            // cout<<start<<":"<<end<<endl;
            ans = s.substr(start, end - start + 1);

        }
        return ans;
    }
};

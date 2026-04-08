class Solution {
public:
    vector<string>str;
    string encode(vector<string>& strs) {
        string ans="";
        for(auto x:strs){
            str.push_back(x);
            ans+=x;
        }
        return ans;
    }

    vector<string> decode(string s) {
        return str;
    }
};

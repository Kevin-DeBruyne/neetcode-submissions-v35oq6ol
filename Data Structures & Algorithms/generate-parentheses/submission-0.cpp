class Solution {
public:
    vector<string> vec;
    void help(string& s, int n, int close, int open) {
        if (open == n && close == n) {
            vec.push_back(s);
            return;
        }


            if (open < n) {
                s.push_back('(');
                help(s, n, close, open + 1);
                s.pop_back();
    
            }
            if (open > close) {
                s.push_back(')');
                help(s, n, close + 1, open);
                s.pop_back();
     
            }
  
        
    }
    vector<string> generateParenthesis(int n) {
        string s = "";
        help(s, n, 0, 0);
        return vec;
    }
};

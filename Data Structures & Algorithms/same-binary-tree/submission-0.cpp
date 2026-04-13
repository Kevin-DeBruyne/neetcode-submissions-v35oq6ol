/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<int>ans1;
    vector<int>ans2;
    void help(TreeNode* p, vector<int>&ans){
        if(p==nullptr){
            ans.push_back(-1);
            return;
        }
        ans.push_back(p->val);
        help(p->left, ans);
        help(p->right, ans);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        help(p, ans1);
        help(q, ans2);
        // for(auto x:ans1){
        //     cout<<x<<":";
        // }
        // cout<<endl;
        // for(auto x:ans2){
        //     cout<<x<<":";
        // }
        return ans1==ans2;
    }
};

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
int maxDepth(TreeNode* root) {
    if(root==NULL){
        return 0;
    }
    return max(maxDepth(root->left)+1, maxDepth(root->right)+1);
}
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        if(isBalanced(root->left)==false || isBalanced(root->right)==false){
            return false;
        }
        isBalanced(root->left);
        isBalanced(root->right);
        int leftHeight=maxDepth(root->left);
        int rightHeight=maxDepth(root->right);
        cout<<abs(leftHeight-rightHeight)<<endl;
        if(abs(leftHeight-rightHeight)>1){
            return false;
        }
        else{
            return true;
        }
    }
};

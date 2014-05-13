/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxPathSum(TreeNode *root) {
        if(root==NULL) return 0;
        int min=INT_MIN;
        maxPath(root,min);
        return min;
        
    }
    int maxPath(TreeNode *root, int & min){
        if(root==NULL) return 0;
        int left=maxPath(root->left, min);
        int right=maxPath(root->right,min);
        int cur=root->val+(left>0?left:0)+(right>0?right:0);
        if(cur>min) min=cur;
        return root->val+max(left,max(right,0));
    }
    
};
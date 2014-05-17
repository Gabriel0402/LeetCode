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
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
        vector<vector<int> > result;
        vector<int> temp;
        if(root==NULL) return result;
        help(root, sum, result, temp);
        return result;
    }
    void help(TreeNode *root, int sum, vector<vector<int> > &result, vector<int> &temp){
        temp.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            if(root->val==sum) result.push_back(temp);
        }
        if(root->left) help(root->left,sum-root->val,result,temp);
        if(root->right) help(root->right,sum-root->val,result,temp);
        temp.pop_back();
    }
};
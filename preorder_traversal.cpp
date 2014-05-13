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
    vector<int> preorderTraversal(TreeNode *root) {
	  		vector<int> result;
			stack<TreeNode*> stack_tree;
			while(root!=NULL|| !stack_tree.empty())
			{
				while(root!=NULL)
				{
					result.push_back(root->val);
					stack_tree.push(root);
					root=root->left;
				}
				if(!stack_tree.empty())
				{
					root=stack_tree.top();
					root=root->right;
				   stack_tree.pop();
				}
			}
			return result;
        
    }
};
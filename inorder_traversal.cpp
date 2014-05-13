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
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> result;
        if(root==NULL) return result;
        stack<TreeNode *> my_stack;
        TreeNode *temp=root;
        while(!my_stack.empty() || temp!=NULL)
        {
            if(temp!=NULL)
            {
                my_stack.push(temp);
                temp=temp->left;
            }
            else
            {
                temp=my_stack.top();
                result.push_back(temp->val);
                my_stack.pop();
                temp=temp->right;
            }
            
        }
        return result;
    }
};
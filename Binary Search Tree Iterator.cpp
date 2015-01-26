/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
    std::stack<TreeNode*> res;
public:
    BSTIterator(TreeNode *root) {
        while(root!=NULL){
            res.push(root);
            root=root->left;
        }
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !res.empty();
        
    }

    /** @return the next smallest number */
    int next() {
        TreeNode *temp=res.top();
        res.pop();
        int ret=temp->val;
        if(temp->right!=NULL){
            temp=temp->right;
            while(temp!=NULL)
            {
                res.push(temp);
                temp=temp->left;
            }
        }
        return ret;
    }
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
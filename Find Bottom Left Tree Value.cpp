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
    int value;
    int l=0;
    int findBottomLeftValue(TreeNode* root) {
        value=root->val;
        leftValue(root,0);
        return value;
    }
    void leftValue(TreeNode * root, int level){
        if(root==NULL)
            return;
       leftValue(root->left,level+1);
       leftValue(root->right,level+1);
        if(level>l){  
            value=root->val;
            l=level;
        }      
    }
};
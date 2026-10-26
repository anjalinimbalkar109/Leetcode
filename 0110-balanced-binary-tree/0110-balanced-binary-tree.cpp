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
    bool isBalanced(TreeNode* root) {
        int Balanced = Height(root);
        return bool (Balanced == -1) ? false:true;
    }
private:
    int Height(TreeNode* node){
        if(node == NULL) return 0;

        int lh = Height(node->left);
        if(lh == -1) return -1;
        int rh = Height(node->right);
        if(rh == -1) return -1;
        if(abs(lh-rh)>1) return -1;
        
        return 1+max(lh,rh);
    }
};
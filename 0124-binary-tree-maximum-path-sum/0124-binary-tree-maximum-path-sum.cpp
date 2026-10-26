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
    int maxPathSum(TreeNode* root) {
        int Max = INT_MIN;
        PathSum(root,Max);
        return Max;
    }
private:
    int PathSum(TreeNode* node,int &Max){
        if(node==NULL) return 0;

        int lSum = max(0,PathSum(node->left,Max));
        int rSum = max(0,PathSum(node->right,Max));
        Max = max(Max,(lSum+rSum+node->val));

        return node->val + max(lSum,rSum);
    }    
};
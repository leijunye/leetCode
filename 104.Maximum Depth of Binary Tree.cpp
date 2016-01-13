/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)return 0;               //若节点为空则返回0
        int l，r;                          //定义两个int型l,r，l记录左子树的深度，r记录右子树的深度
        l=maxDepth(root->left);           //用递归算法遍历左子树
        r=maxDepth(root->right);          //遍历右子树
        
        return 1+max(l,r);                //比较左子树与右子树的深度，并返回更大的值
    }
};
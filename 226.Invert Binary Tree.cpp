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
    TreeNode* invertTree(TreeNode* root) {
     if(root==NULL) return root;                //若root为空则直接返回
     exchangetree(root);
     return root;
  }
    
    void exchangetree(TreeNode* root) 
    {   TreeNode *t;
        if(root!=NULL)                     
          if(root->left!=NULL||root->right!=NULL)         //若左右子树不为空，则交换左右子树的位置
            {
                t=root->left;
                root->left=root->right;
                root->right=t;
                exchangetree(root->right);                //递归遍历右子树
                exchangetree(root->left);                 //递归遍历左子树
            }
        
    }
};
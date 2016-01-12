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
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL)return false;                  //若根节点为空则退出函数

        return PreOrder(root,sum);                  //调用先序遍历递归函数
    }
    bool PreOrder(TreeNode *head,int sum)
    {   if(head==NULL)return false;                     //若跟节点为空则返回假
        
        if(head->left==NULL&&head->right==NULL&&sum-head->val==0)return true; //若根节点为叶子节点，且SUM减去VAL的值后恰好为0，则返回真
       
        return (PreOrder(head->left,sum-head->val)||PreOrder(head->right,sum-head->val));//若节点还有左子树或右子树，则调用递归函数且SUM减去该节点的VAL值
        
       
    }
};
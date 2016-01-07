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
    bool isSameTree(TreeNode* p, TreeNode* q) {                                  
      return TraTree(p,q);                                                        
    }
    
    
    bool TraTree(TreeNode *p,TreeNode *q)                            //定义一个遍历二叉数的递归函数
    {   if(p==NULL&&q==NULL)return true;                             //若此为根节点则返回真
        if(p!=NULL&&q!=NULL&&p->val==q->val)                         //判断节点的值相等，且不为空
        return (TraTree(p->left,q->left)&&TraTree(p->right,q->right));  //对节点的左右子树进行遍历
      else
        return false;
        
    }
    
};
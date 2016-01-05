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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> a;                                      //定义vector记录中序遍历的结果
        TreeNode *p;                                        //定义TreeNode类型的指针，用于遍历二叉树
        stack<TreeNode*> b;                                 //定义TreeNode*类型的栈，用于记录中序遍历的根节点
        p=root;
        if (p == NULL) return a;                            //若二叉树为空，则返回a
        while(p||!b.empty())                                //当b栈不为空或这p不为空时执行循环
        {
            while(p)                                        //当p不为空是，执行循环，直到找到最左的叶子节点
            {
                b.push(p);                                  //把跟节点存入栈中
                p=p->left;
            }
            p=b.top();                                      //把栈的栈首值赋给p
            b.pop();                                        //去除一个栈首所记录的根节点
            a.push_back(p->val);                            //把p指向的值赋给vector容器a
            p=p->right;                                     //p指向右节点
        }
        return a;
    }
};
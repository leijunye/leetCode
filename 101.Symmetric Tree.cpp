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
    bool isSymmetric(TreeNode* root) {
        stack<TreeNode* > a;            //记录左子树，以先序遍历   
        stack<TreeNode* > b;            //记录右子树，与a相反遍历
        if(root==NULL)return true;      
        b.push(root->left);             //让根节点左叶子节点进栈
        a.push(root->right);            //让根节点右叶子节点进栈
        while (a.size() > 0 && b.size() > 0){
            TreeNode* left = a.top();         //得到a栈头节点
            TreeNode* right = b.top();        //得到b栈头节点
            a.pop();    //并让头节点出栈
            b.pop();    //同上
            if(left == NULL && right == NULL) continue;//若左右都为空则相同，执行continue；
            if(left == NULL || right == NULL) return false;//若有一个为空，则不同，直接返回false；
            if(left->val == right->val) {                  //若值相等，则把该节点的左右叶子进栈，注意a,b的进栈顺序相反
                a.push(left->right);
                a.push(left->left);
                b.push(right->left);
                b.push(right->right);
            }else{
                return false;
            }
        }
        return true;

    }
};
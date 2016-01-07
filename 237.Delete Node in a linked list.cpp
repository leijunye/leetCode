/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;    //把下一节点的值赋给对应节点的值
        ListNode *a = node->next;       //新建ListNoded类型的指针a并指向node的下一个节点
        node->next = a->next;           
        delete a;                       //删除a，则链表断开
        
    }
};
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *a,*b,*c;                                //定义三个ListNode指针
        if(head==NULL||head->next==NULL)return head;      //若head或head下一个值为空则直接返回head指针
        a=head;                                           //a指向head
        b=a->next;                                        //b指向head下一个节点
        ListNode *list=new ListNode(0);                   //新建一个链表list为头节点，值为0
        c=list;                                           //c指向新建的聊表list
        if(a->val!=b->val)                                
        {   ListNode *d=new ListNode(a->val);
            c->next=d;
            c=c->next;
                                                           /*若旧聊表的第一个节点值与第二个节点值不同，则新建一个节点
         }                                                      值等于第一个节点的值并介入新链表中，C指向下一节点 */
        while(b)
       {
           if(a->val==b->val)                             //若a指向的值与b指向的值相等，则b指向下一个，知道找到不同的为止
             b=b->next;
           else{
               a=b;                                       //a与b的值不同，a指向b的位置
               b=b->next;                                 //b继续指向下一个
               if(b!=NULL&&a->val!=b->val)                //若还不同则新建节点，值为a的val，并接入list，c指向下一个
               { 
                 ListNode *e=new ListNode(a->val);
                 c->next=e;
                 c=c->next;
               }
           }
       }
       if(a->next==NULL)   c->next=a;                    //b为空后跳出循环，若a末节点，则接入c
  
       else if(a->val!=a->next->val)      c->next=a;     //若a不为末节点,若a的下一个节点值与a不等，则把a接入c
 
       
      return list->next;                                
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      ListNode* head = new ListNode();
      ListNode* p = head;
      while(list1){
        while(list2 && list1->val > list2->val){
          p->next = new ListNode(list2->val);
          list2 = list2->next;
          p = p->next;
        }
        p->next = new ListNode(list1->val);
        list1 = list1->next;
        p = p->next;
      }
      while(list2){
        p->next = new ListNode(list2->val);
        list2 = list2->next;
        p = p->next;
      }
      return head->next;
    }
};

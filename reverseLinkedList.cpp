struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      ListNode *p = head;
      stack<ListNode*> S;
      while(p){
        S.push(p);
        p = p->next;
      }
      p = S.top();
      head = p;
      S.pop();
      while(!S.empty()){
        p->next = new ListNode(S.top()->val);
        p = p->next;
        S.pop();
      }
      return head;
    }
};

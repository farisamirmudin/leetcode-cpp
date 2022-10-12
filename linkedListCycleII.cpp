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
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, int>m;
        ListNode* p = head;
        int pos = 0;
        while(p){
            if(m.find(p) != m.end()){
                return p;
            } else {
                m.insert(make_pair(p, pos));
            }
            p = p->next;
            pos++;
        }
        return NULL;
    }
};

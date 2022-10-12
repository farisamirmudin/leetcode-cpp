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
    ListNode* middleNode(ListNode* head) {
        
        vector<ListNode*> v;
        ListNode* rear = head;
        while(rear){
            v.push_back(rear);
            rear = rear->next;
        }
        int n = v.size();
        if (n%2==0){
            return v[n/2];
        } else {
            return v[round(n/2)];
        }
    }
};

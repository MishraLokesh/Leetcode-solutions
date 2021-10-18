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
    void remove_dup(ListNode* head) {
        ListNode* curr = head;
        while (curr->next != NULL) {
            if (curr->next->val == curr->val) curr->next = curr->next->next;
            else curr = curr->next;
        }
    }
    
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return NULL;
        remove_dup(head);
        return head;
    }
};
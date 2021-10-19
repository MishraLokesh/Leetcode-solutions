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
    set<int> s;
    void remove_dup(ListNode* head) {
        ListNode* curr = head;
        while (curr->next != NULL) {
            if (curr->next->val == curr->val) {
                curr->next = curr->next->next; 
                s.insert(curr->val);
                }
            else curr = curr->next;
        }
    }
    
    ListNode* remove_rep(ListNode* head) {
	ListNode* curr = head;
	ListNode* prev = head;
    if(s.count(head->val) && head->next == NULL) return NULL;
	while (curr != NULL) {
		if (s.count(curr->val)) {
			if (head == curr) {head = curr->next; prev = head;}
			else if (curr->next == NULL) prev->next = NULL;
			else prev->next = curr->next;
		}
		else prev = curr;

		curr = curr->next;
	}
    return head;
}
    
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return NULL;
        remove_dup(head);
        ListNode* ret = remove_rep(head);
        return ret;
    }
};
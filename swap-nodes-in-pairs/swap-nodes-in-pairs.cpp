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
    ListNode* swap(ListNode* head) {
	struct ListNode* curr = head;
	struct ListNode* prev = head;
	struct ListNode* nxt;
	struct ListNode* Nnxt;
	bool flag = true;

	// head = curr->next;
	while (curr->next != NULL) {
		nxt = curr->next;
		Nnxt = nxt->next;

		nxt->next = curr;
		curr->next = Nnxt;

		if (!flag) {
			prev->next = nxt;
			prev = curr;
		}
		else {
			head = nxt;
			flag = false;
		}

		if (curr->next) curr = curr->next;
	}
    return head;
}
    
    ListNode* swapPairs(ListNode* head) {
        if(!head) return NULL;
        ListNode* ret = swap(head);
        return ret;
    }
};



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
    
    void reorder(ListNode* head) {
        ListNode* temp = head;
        bool flag = true;
        deque <ListNode*> q;

        while (temp != NULL) {
            q.push_back(temp);
            temp = temp->next;
        }

        ListNode* front;
        ListNode* back = NULL;
        ListNode* preb;

        while (!q.empty()) {

            front = q.front();
            q.pop_front();
            preb = back;
            
            if (q.empty()) {
                preb->next = front;
                front->next = NULL;
                flag = true;
                break;
    		}
            
            back = q.back();
            q.pop_back();
            front->next = back;
            if (!flag) {
                preb->next = front;
            }
            else {
                head = front;
                flag = false;
            }
        }
	if (!flag)  back->next = NULL;
    }

    
    void reorderList(ListNode* head) {
        if(head->next == NULL) return;
        reorder(head);
        return;
    }
};










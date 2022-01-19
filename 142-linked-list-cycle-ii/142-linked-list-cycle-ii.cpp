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
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                slow = head;
                while(slow != fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};

// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         if(head == NULL) return NULL;
//         ListNode* temp = head;
//         map<int, ListNode *> m;
//         while(true){
//             if(temp->next == NULL) return NULL;
//             if(m.find(temp->val) == m.end())
//                 m[temp->val] = temp;
//             else 
//                 return m[temp->val];
//             temp = temp->next;
//         }
//     }
// };
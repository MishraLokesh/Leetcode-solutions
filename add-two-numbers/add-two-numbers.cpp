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
    ListNode* head;
    void insert(int new_data) {
        ListNode* new_ListNode = new ListNode;
        new_ListNode->val = new_data;
        new_ListNode->next = NULL;
        if(head == NULL) {
            head = new_ListNode;
        }else {
            ListNode* temp = head;
            while(temp->next != NULL)
              temp = temp->next;
            temp->next = new_ListNode;
        }
    }
    
    void find_sum(ListNode* l1, ListNode* l2) {
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        int carry = 0, sum = 0;
        while (!(curr1 == NULL && curr2 == NULL)) {
            if (curr1 == NULL)
                sum = 0 + curr2->val + carry;
            else if (curr2 == NULL)
                sum = curr1->val + 0 + carry;
            else
                sum = curr1->val + curr2->val + carry;
            insert(sum % 10);
            if (curr1 != NULL)curr1 = curr1->next;
            if (curr2 != NULL)curr2 = curr2->next;
            carry = sum / 10;
        }
        if (carry) insert(carry);
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        find_sum(l1,l2);
        return head;
    }
};
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
       
    bool isPalindrome(ListNode* temp) {
      ListNode* first=temp;
      ListNode* second = temp;
      while(second && second->next){
        first = first->next;
        second = second->next->next;
      }  
      ListNode* t1 = first->next;
      if(!t1) return (first->val == temp->val) ? true : false;
      ListNode* t2 = first->next->next;
      first->next = NULL;
      while(t1){
        t1->next = first;
        first = t1;
        t1 = t2;
        t2 = (t2==NULL) ? NULL : t2->next;
      }

      while(temp->next){
        if(temp->val != first->val) return false;
        temp = temp->next;
        first = first->next;
      }
      return true;

        }
};
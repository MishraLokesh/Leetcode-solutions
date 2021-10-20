// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* head;
//     void insert(int new_data) {
//         ListNode* new_ListNode = new ListNode;
//         new_ListNode->val = new_data;
//         new_ListNode->next = head;
//         head = new_ListNode;
//     }
    
//     void find_sum2(ListNode* l1, ListNode* l2) {
//         ListNode* curr1 = l1;
//         ListNode* curr2 = l2;
//         long long int carry = 0, sum = 0, n1 = 0, n2 = 0;
//         while (curr1) {
//             n1 = n1 * 10 + curr1->val;
//             curr1 = curr1->next;
//         } while (curr2) {
//             n2 = n2 * 10 + curr2->val;
//             curr2 = curr2->next;
//         }
//         sum = n1 + n2;
//         if(sum==0) {insert(0); return;}
//         while (sum > 0) {
//             insert(sum%10);
//             // cout << sum % 10;
//             sum = sum / 10;
//         }
//     }
    
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         find_sum2(l1,l2);
//         return head;
//     }
// };
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int n1 = 0, n2 = 0, carry = 0;
        ListNode *curr1 = l1, *curr2 = l2, *res = NULL;
        while( curr1 ){ curr1=curr1->next; n1++; }
        while( curr2 ){ curr2=curr2->next; n2++; } 
        curr1 = l1; curr2 = l2;
        while( n1 > 0 && n2 > 0){
            int sum = 0;
            if( n1 >= n2 ){ sum += curr1->val; curr1=curr1->next; n1--;}
            if( n2 > n1 ){ sum += curr2->val; curr2=curr2->next; n2--;}
            res = addToFront( sum, res );
        }
        curr1 = res; res = NULL;
        while( curr1 ){
            curr1->val += carry; carry = curr1->val/10;
            res = addToFront( curr1->val%10, res );
            curr2 = curr1; 
            curr1 = curr1->next;
            delete curr2;
        }
        if( carry ) res = addToFront( 1, res );
        return res;
    }
    ListNode* addToFront( int val, ListNode* head ){
        ListNode* temp = new ListNode(val);
        temp->next = head;
        return temp;
    }
};
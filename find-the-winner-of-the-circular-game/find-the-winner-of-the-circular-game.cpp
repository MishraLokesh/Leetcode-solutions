class Node
{
public:
	int data;
	Node *next;
};
class Solution {
public:
    void push(Node **head_ref, int data)
{
	Node *ptr1 = new Node();
	Node *temp = *head_ref;
	ptr1->data = data;
	ptr1->next = *head_ref;

	/* If linked list is not NULL then
	set the next of last node */
	if (*head_ref != NULL)
	{
		while (temp->next != *head_ref)
			temp = temp->next;
		temp->next = ptr1;
	}
	else
		ptr1->next = ptr1; /*For the first node */

	*head_ref = ptr1;
}
    
        int findWinner(Node *head, int k) {
        Node *temp = head;
        Node *prev = temp;
        while (temp->next != temp) {
            for (int i = 0; i < k - 1; i++) {
                prev = temp;
                temp = temp->next;
            }
            prev -> next = temp->next;
            temp = temp->next;
            // cout << temp << endl;
        }
        return temp->data;
    }
    
    int findTheWinner(int n, int k) {
        	Node *head = NULL;

        	for (int i = n - 1; i >= 0; i--) push(&head, i + 1);
        if(k==1) return n;
        int ret = findWinner(head, k);
        return ret;
    }
};
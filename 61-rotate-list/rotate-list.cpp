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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL)
            return head;
        int len=0;
        ListNode* temp=head;
        while (temp!=NULL)
        {
            len++;
            temp=temp->next;
        }
        k%=len;
        while(k--)
        {
            ListNode* ptr=head;
            while (ptr->next->next!=NULL)
                ptr=ptr->next;
            ListNode* temp=ptr->next;
            ptr->next=NULL;
            temp->next=head;
            head=temp;
        }
        return head;
    }
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> mota;
        ListNode* temp = head;
        while (temp != NULL)
        {
            mota.push(temp->val);
            temp = temp->next;
        }
        temp = head;
        while (temp != NULL) 
        {
            if (temp->val != mota.top())
                return false;
            mota.pop();
            temp = temp->next;
        }
        return true;
    }
};
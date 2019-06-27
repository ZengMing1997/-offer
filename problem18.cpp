class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return head;
        ListNode *Ans = new ListNode(head->val);
        ListNode *cur = Ans;
        while(head != NULL)
        {
            if(cur->val != head->val)
            {
                cur->next = new ListNode(head->val);
                cur = cur->next;
            }
            head = head->next;
        }
        return Ans;
    }
};

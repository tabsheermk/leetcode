ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        else{
            ListNode *temp = head->next;
            head->next = swapPairs(temp->next);
            temp->next = head;
            return temp;
        }
    }
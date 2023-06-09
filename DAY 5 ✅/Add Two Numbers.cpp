void insertAtTail(ListNode *&head, ListNode *&tail, int d){
        ListNode *temp = new ListNode(d);
        if(head==NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
        return;
    }
    ListNode *add(ListNode *a, ListNode *b){
        int carry = 0;
        ListNode *ansHead = NULL;
        ListNode *ansTail = NULL;

        while(a!=NULL || b!=NULL || carry!=0){
            int val1 = 0;
            if(a!=NULL) val1 = a->val;
            int val2 = 0;
            if(b!=NULL) val2 = b->val;
            int sum = carry + val1 + val2;
            int digit = sum%10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
           if(a!=NULL) a = a->next;
            if(b!=NULL) b = b->next;
        }
        return ansHead;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans = add(l1,l2);
        return ans;
    }
 





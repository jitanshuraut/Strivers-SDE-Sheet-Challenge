ListNode *slow=head, *fast=head;

        for(int i=0; i<n; i++)
            fast = fast->next;

        if(!fast)
        {
            head = head->next;
            delete slow;    // Since slow points to the first node
            return head;
        }
        
        while(fast && fast->next)
        {
            fast = fast->next;
            slow = slow->next;
        }

        if(slow && slow->next)
        {
            ListNode* temp = slow->next;
            slow->next = slow->next->next;
            delete temp;
        }

        return head;

// Second approach will be separate the parts one part before deletion node one part after deletion node the just make a link between them
// Code:
int Size(ListNode* head){
        int cnt = 0;
        while(head!=NULL){
            cnt++;
            head=head->next;
        }
        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int m = Size(head);
        if(m == 1){
            head = NULL;
            return head;
        }
        if(m-n == 0){
            ListNode* cur = head;
            head=head->next;
            cur = NULL;
            return head;
        }
        ListNode* prev = NULL;
        ListNode* cur = head;
        for(int i = 0;i<(m-n);i++){
            prev = cur;
            cur = prev->next;
        }
        prev->next = cur->next;
        cur->next=NULL;
        delete cur;
        return head;  }


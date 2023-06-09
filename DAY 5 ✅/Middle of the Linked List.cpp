int length(ListNode* head){
        int len = 0;
        while(head != NULL)
        { len++;
          head = head->next;
        }
        return len;
    }
    ListNode* middleNode(ListNode* head) {
        int len = length(head);
        int ans = len/2;
        ListNode* temp = head;
        int cnt = 0;
        while(cnt < ans)
        {
            temp = temp->next;
            cnt++;
        }
        return temp;
    }


//second
  ListNode* slow = head; 
       ListNode* fast = head; 
        while (fast)
        {
            fast = fast->next;
            if (fast)
            {
                fast=fast->next;
                slow = slow->next;
            }
        }
        return slow;

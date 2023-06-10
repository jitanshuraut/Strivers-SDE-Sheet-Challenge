bool isPalindrome(ListNode* head) {
 ListNode *slow=head;
 ListNode *fast=head;
 while(fast->next!=NULL && fast->next->next!=NULL){
 slow=slow->next;
 fast=fast->next->next;
 }
 ListNode *mid=slow->next;
 ListNode *curr=mid;
 ListNode *prev=NULL;
 while(curr!=NULL){
 ListNode *next=curr->next;
 curr->next=prev;
 prev=curr;
 curr=next;
 }
 while(prev!=NULL && head!=mid){
 if(head->val!=prev->val)
 return false;
 prev=prev->next;
 head=head->next;
 }
 return true;
 }

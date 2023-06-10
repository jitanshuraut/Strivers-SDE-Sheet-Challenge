int length (ListNode* head)
 {
 int len = 0;
 while(head != NULL)
 {
 len++;
 head = head -> next;
 }
 return len;
 }
 ListNode* reverseKGroup(ListNode* head, int k) {
 int len = length(head);
 if(len < k) //As mentioned in aue, if len < k don't reverse
 {
 return head;
 }
 int cnt = 0;
 ListNode* curr = head; //1 --- After 1st step, curr = 2
 ListNode* prev = NULL; //NULL
 ListNode* forward = NULL;
 while(curr != NULL && cnt < k) 
 {
 forward = curr -> next; //2 --- 3
 curr -> next = prev;
 prev = curr; //prev = 1 --- prev = 2
 curr = forward; // curr = 2 --- curr = 3
 cnt++;
 }
 if(forward != NULL)
 {
 head -> next = reverseKGroup(forward, k); //Recursively 
calling for remaining nodes
 }
 //I've stored it in head -> next bcz, head = 1 and I've 
coneected it with 4, head of the new LL
 return prev; // return prev bcz, 2 is the head of our final LL 
and it is stored in prev
 }

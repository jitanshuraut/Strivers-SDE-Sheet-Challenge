int length(ListNode *head){
 int len = 0;
 while(head){
    len++;
    head = head->next;
 }
 return len;
 }
 ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
 if(!headA || !headB) return NULL;
 //step1
 int lenA = length(headA), lenB = length(headB);
 //step2
 if(lenA>lenB){
 while(lenA>lenB){
   headA = headA->next;
   lenA--;
    }
 }
 else if(lenA<lenB){
   while(lenA<lenB){
     headB = headB->next;
     lenB--;
   }
 }
 
 //step 3
 while(headA && headB){
    if(headA==headB) return headA;
    headA = headA->next;
    headB = headB->next;
 }

    return NULL;
}




// Approach 2
// In this approach, we can simply convert this problem into a loop problem.
// 1. Find the tail.
// 2. Connect the tail with any of the head which creates a loop.
// 3. Using the other head, find intersection point of the loop.
// 4. Undo the loop, by setting tail->next = NULL.
// 5. Return the intersection node.
// Code:
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
 //getting the tail
 ListNode* tail = headA;
 while(tail->next){
   tail = tail->next;
 }
 //creating a loop
 tail->next = headA;
 //detecting and finding the intersection
 ListNode *fast = headB, *slow = headB;
 while(fast && fast->next){
    slow = slow->next;
    fast = fast->next->next;
 if(slow==fast) {
   slow = headB;
 while(slow!=fast){
   slow = slow->next;
   fast = fast->next;
 }
 //undoing the loop
 tail->next = NULL;
 return slow;
 };
 }
 tail->next = NULL;
 return NULL;
}


// TUF approach:

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
 if (headA==NULL || headB==NULL)
 {
 return NULL;
 }
 ListNode *ptrA=headA, *ptrB=headB;
 while(ptrA!=NULL || ptrB!=NULL)
 {
 if(ptrA==NULL)
 ptrA=headB;
 if(ptrB==NULL)
 ptrB=headA;
 if (ptrA==ptrB)
 return ptrA;
 ptrA=ptrA->next;
 ptrB=ptrB->next;
 }
 return NULL;
 }


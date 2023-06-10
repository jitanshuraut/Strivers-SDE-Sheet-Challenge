bool hasCycle(ListNode *head) {
 if(head == NULL)
 return false;
 ListNode *fast = head;
 ListNode *slow = head;
 
 while(fast != NULL && fast ->next != NULL)
 {
 fast = fast->next->next;
 slow = slow->next;
 if(fast == slow)
 return true;
 }
 return false;
 }


// using hash table :
// I used unordered set in this question, because i need only one 
// parameter which is reference to node. While head is not nullptr, check 
// map for current node is in already in table or not.
// If set has current node reference, it means there is a cycle here. If 
// not we can reach to tail of the list, after that current node becomes 
// nullptr and exits the loop and returns false.
// Code:

bool hasCycle(ListNode *head) {
 unordered_set<ListNode*> set;
 while (head!=nullptr) //until head is null
 {
 if (set.count(head)==0) //check for repetition
 {
 set.insert(head); //if not, add reference to set
 }
 else //if repetition is found
 {
 return true;
 }
 head=head->next; //go next node
 }
 //if we can reach here, means that there is no cycle
 return false;
 }

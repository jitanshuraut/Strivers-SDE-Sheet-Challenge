class Solution {
public:
ListNode* rotateRight(ListNode* head, int k) {
    if (head == nullptr) {
        return nullptr;
    }
    
    ListNode* newHead;
    ListNode* tail;
    newHead = tail = head;
    int size = 1;
    
    // Find the tail of the list and calculate its size
    while (tail->next) {
        tail = tail->next;
        size++;
    }
    
    // Connect the tail to the head to form a circular list
    tail->next = head;
    
    // Adjust the value of k if it is larger than the size of the list
    k = k % size;
    
    // Traverse to the node where the rotation should start
    for (int i = 0; i < size - k; i++) {
        tail = tail->next;
    }
    
    // The node next to the tail becomes the new head of the rotated list
    newHead = tail->next;
    
    // Break the circular list by setting the tail's next pointer to null
    tail->next = nullptr;
    
    return newHead;
    }
};


static void deleteNode(ListNode* node) {
        ListNode* next = node->next;
        *node = *next;
        
        delete next;
    }


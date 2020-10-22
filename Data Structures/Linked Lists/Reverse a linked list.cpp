//Hacker Rank - Data Structure Practice Problem
//Reverse a linked list Solution

SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* curr = head;
    SinglyLinkedListNode* prev = nullptr;
    SinglyLinkedListNode* next = nullptr;
    while(curr != nullptr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;

}
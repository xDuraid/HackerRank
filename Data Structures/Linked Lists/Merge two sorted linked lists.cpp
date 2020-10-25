//Hacker Rank - Data Structure Practice Problem
//Merge two sorted linked lists Solution

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* fake = new SinglyLinkedListNode(-1);
    SinglyLinkedListNode* last = fake;
    
    while(head1 != nullptr && head2 != nullptr){
        if(head1->data <= head2->data){
            last->next = head1;
            last = head1;
            head1 = head1->next;
        }
        else{
            last->next = head2;
            last = head2;
            head2 = head2->next;
        }
    }

    if(head1 != nullptr){
        last->next = head1;
    }
    if(head2 != nullptr){
        last->next = head2;
    }

    return fake->next;
}
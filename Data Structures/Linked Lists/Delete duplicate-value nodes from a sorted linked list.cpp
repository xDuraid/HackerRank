//Hacker Rank - Data Structure Practice Problem
//Delete duplicate-value nodes from a sorted linked list Solution

// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* temp = head;
    while(temp->next != nullptr){
        if(temp->data == temp->next->data){
            SinglyLinkedListNode* del = temp->next;
            temp->next = temp->next->next;
            delete del;
        }
        else{
            temp = temp->next;
        }
    }
    return head;

}
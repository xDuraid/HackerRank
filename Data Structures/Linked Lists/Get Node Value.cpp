//Hacker Rank - Data Structure Practice Problem
//Get Node Value Solution


// Complete the getNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    SinglyLinkedListNode* temp = head;
    SinglyLinkedListNode* ans = head;
    
    for (int i = 0; i < positionFromTail; i++) {
        temp = temp->next;
    }

    while (temp->next != nullptr) {
        temp = temp->next;
        ans = ans->next;
    }

    return ans->data;
}
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
    SinglyLinkedListNode* ans = head;
    
    for (int i = 0; i < positionFromTail; i++) {
        head = head->next;
    }

    while (head->next != nullptr) {
        head = head->next;
        ans = ans->next;
    }

    return ans->data;
}

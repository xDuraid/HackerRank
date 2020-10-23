//Hacker Rank - Data Structure Practice Problem
//Print the Elements of a Linked List Solution

// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {
    while (head != nullptr) {
        cout << head->data << endl;
        head = head->next;
    }
}

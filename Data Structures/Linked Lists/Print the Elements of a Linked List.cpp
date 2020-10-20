//Hacker Rank - Data Structure Practice Problem
//Print the Elements of a Linked List Solution

void printLinkedList(SinglyLinkedListNode* head) {
    while (head != nullptr) {
        cout << head->data << endl;
        head = head->next;
    }
}
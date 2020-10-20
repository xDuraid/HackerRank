//Hacker Rank - Data Structure Practice Problem
//Insert a Node at the Tail of a Linked List Solution

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {

    SinglyLinkedListNode* temp = head;

    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);

    if (head == nullptr) {
        head = newNode;
    }
    else {
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

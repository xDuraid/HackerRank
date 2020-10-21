//Hacker Rank - Data Structure Practice Problem
//Insert a node at the head of a linked list Solution

SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    newNode->next = llist;
    llist = newNode;
    return llist;

}
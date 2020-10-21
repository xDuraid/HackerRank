//Hacker Rank - Data Structure Practice Problem
//Insert a node at a specific position in a linked list Solution

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* temp = head;
    if(position == 0){
        newNode->next = head;
        head = newNode;
    }
    else{
        for(int i = 1; i < position; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;

}

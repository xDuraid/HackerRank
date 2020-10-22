//Hacker Rank - Data Structure Practice Problem
//Print in Reverse Solution

void reversePrint(SinglyLinkedListNode* head) {
    if(head == nullptr){
        return;
    }
    reversePrint(head->next);
    cout << head->data << endl;

}
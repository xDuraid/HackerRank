//Hacker Rank - Data Structure Practice Problem
//Delete a Node Solution

// Complete the deleteNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
        SinglyLinkedListNode* temp1 = head;
        if(position == 0){
            head = temp1->next;
            delete temp1;
        }
        else{
            for(int i = 1; i < position; i++){
                temp1 = temp1->next;
            }
            SinglyLinkedListNode* temp2 = temp1->next;
            temp1->next = temp2->next;
            delete temp2;
        }
        return  head;

}

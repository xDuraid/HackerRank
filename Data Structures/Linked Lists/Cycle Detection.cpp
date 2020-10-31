//Hacker Rank - Data Structure Practice Problem
//Cycle Detection Solution

// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* temp1 = head;
    SinglyLinkedListNode* temp2 = head;
    while(temp1 != nullptr && temp1->next != nullptr && temp2 != nullptr){
        temp1 = temp1->next->next;
        temp2 = temp2->next;
        if(temp1 == temp2)
            return true;
    }
    return false;
}

//based on Floyd Algorithm

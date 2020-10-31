//Hacker Rank - Data Structure Practice Problem
//Find Merge Point of Two Lists Solution

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* temp1 = head1; 
    SinglyLinkedListNode* temp2 = head2;// temp1 and temp2 for calculating 1st & 2nd List length
    int l1 = 0, l2 = 0;
    while(temp1 != nullptr || temp2 != nullptr){
        if(temp1 != nullptr){
            l1++;
            temp1 = temp1->next;
        }
        if(temp2 != nullptr){
            l2++;
            temp2 = temp2->next;
        }
    }
    int d = 0;
    if(l1 > l2){
        d = l1 - l2;
        for(int i = 0; i < d; i++){
            head1 = head1->next;
        }
    }
    else{
        d = l2 - l1;
        for(int i = 0; i < d; i++){
            head2 = head2->next;
        }
    }
    while(head1 != head2){
        head1 = head1->next;
        head2 = head2->next;
    }
    return head1->data;
}
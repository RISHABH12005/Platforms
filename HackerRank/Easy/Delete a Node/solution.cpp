// HackerRank Problem: Delete a Node
// Link: https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem
// Difficulty: Easy
// Language: cpp



/*
 * Complete the 'deleteNode' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER position
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
if (!llist) return nullptr;
    if (position == 0) {
        SinglyLinkedListNode* temp = llist;
        llist = llist->next; 
        delete temp; 
        return llist; 
    }
    SinglyLinkedListNode* current = llist;
    for (int i = 0; i < position - 1 && current->next; i++) {
        current = current->next;
    }
    if (current->next) {
        SinglyLinkedListNode* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }

    return llist;
}


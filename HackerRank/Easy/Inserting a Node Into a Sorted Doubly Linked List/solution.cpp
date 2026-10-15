// HackerRank Problem: Inserting a Node Into a Sorted Doubly Linked List
// Link: https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list/problem
// Difficulty: Easy
// Language: cpp



/*
 * Complete the 'sortedInsert' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_DOUBLY_LINKED_LIST llist
 *  2. INTEGER data
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
DoublyLinkedListNode* newNode = new DoublyLinkedListNode(data);
    if (llist == nullptr || data <= llist->data) {
        newNode->next = llist;
        if (llist != nullptr) {
            llist->prev = newNode;
        }
        return newNode;
    }
    DoublyLinkedListNode* current = llist;
    while (current->next != nullptr && current->next->data < data) {
        current = current->next;
    }
    newNode->next = current->next;
    if (current->next != nullptr) {
        current->next->prev = newNode;
    }
    current->next = newNode;
    newNode->prev = current;
    return llist;
}


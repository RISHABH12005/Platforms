// HackerRank Problem: Insert a Node at the Tail of a Linked List
// Link: https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem
// Difficulty: Easy
// Language: cpp



// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* new_node = new SinglyLinkedListNode(data);
    if (head == nullptr) {
        return new_node;
    }
    SinglyLinkedListNode* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = new_node;
    return head;
}


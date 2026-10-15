// HackerRank Problem: Print the Elements of a Linked List
// Link: https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list/problem
// Difficulty: Easy
// Language: cpp



// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* current = head;
    while (current != nullptr) {
        cout << current->data << endl;
        current = current->next;
}
}


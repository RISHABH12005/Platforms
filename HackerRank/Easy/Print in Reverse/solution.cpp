// HackerRank Problem: Print in Reverse
// Link: https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem
// Difficulty: Easy
// Language: cpp



/*
 * Complete the 'reversePrint' function below.
 *
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
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

void reversePrint(SinglyLinkedListNode* llist) {
 stack<int> s;
    while (llist != nullptr) {
        s.push(llist->data);
        llist = llist->next;
    }
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
}


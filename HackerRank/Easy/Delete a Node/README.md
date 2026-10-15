# Delete a Node

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [Delete a Node](https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem)

## Problem Description

This challenge is part of a tutorial track by [MyCodeSchool](http://www.youtube.com/mycodeschool) and is accompanied by a video lesson.

Delete the node at a given position in a linked list and return a reference to the head node. The head is at position 0. The list may be empty after you delete the node. In that case, return a null value.

**Example**

 **

After removing the node at position , .

Function Description**

Complete the *deleteNode* function in the editor below.

*deleteNode* has the following parameters: **
- *SinglyLinkedListNode pointer llist:*  a reference to the head node in the list

- *int position:*  the position of the node to remove

Returns** **
- *SinglyLinkedListNode pointer:* a reference to the head of the modified list

Input Format**

The first line of input contains an integer , the number of elements in the linked list. **
Each of the next  lines contains an integer, the node data values in order.

The last line contains an integer, , the position of the node to delete.

Constraints**

*

* , where  is the  element of the linked list.

**Sample Input**

```
8
20
6
2
19
7
4
15
9
3

```

**Sample Output**

```
20 6 2 7 4 15 9

```

**Explanation**

The original list is . After deleting the node at position , the list is  .

## Examples



## Constraints



## Solution

```cpp
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


```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>

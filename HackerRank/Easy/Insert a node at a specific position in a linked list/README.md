# Insert a node at a specific position in a linked list

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [Insert a node at a specific position in a linked list](https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem)

## Problem Description

This challenge is part of a tutorial track by [MyCodeSchool](http://www.youtube.com/mycodeschool) and is accompanied by a video lesson.

Given a pointer to the head node of a linked list and an integer to insert at a certain position, create a new node with the given integer as its  attribute, insert this node at the desired position, and return the head node.

A position of 0 indicates the head, a position of 1 indicates one node away from the head, and so on. The head pointer given may be null, meaning that the initial list is empty.

**Example** **
 refers to the first node in the list

Insert a node at position  with .  The new list is

Function Description** **
Complete the function  with the following parameters:

* : a reference to the head of the list

* : an integer value to insert as data in the new node

* : an integer position to insert the new node, zero-based indexing

Returns**

* : a reference to the head of the revised list

**Input Format**

The first line contains an integer , the number of elements in the linked list. **
Each of the next  lines contains an integer SinglyLinkedListNode[i].data.

The next line contains an integer , the data of the node that is to be inserted.

The last line contains an integer .

Constraints**

*

* , where  is the  element of the linked list.

* .

**Sample Input**

```
STDIN   Function
-----   --------
3       n = 3
16      llist = 16->13->7
13
7
1       data = 1
2       position = 2

```

**Sample Output**

```
16 13 1 7

```

**Explanation**

The initial linked list is . Insert  at the position  which currently has  in it. The updated linked list is .

## Examples



## Constraints



## Solution

```cpp
// HackerRank Problem: Insert a node at a specific position in a linked list
// Link: https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem
// Difficulty: Easy
// Language: cpp



/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
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

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
 SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    if (position == 0) {
        newNode->next = llist;
        return newNode;
    }

    SinglyLinkedListNode* current = llist;
    for (int i = 0; i < position - 1 && current != nullptr; i++) {
        current = current->next;
    }

    if (current != nullptr) {
        newNode->next = current->next;
        current->next = newNode;
    }
    
    return llist;
}


```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>

# The World of Numbers

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [The World of Numbers](https://www.hackerrank.com/challenges/bash-tutorials---the-world-of-numbers/problem)

## Problem Description

Given two integers,  and , find their sum, difference, product, and quotient.

**Input Format**

Two lines containing one integer each ( and , respectively).

**Constraints**

 **

Output Format**

Four lines containing the sum (), difference (), product (), and quotient (), respectively. **
(While computing the quotient, print only the integer part.)

Sample Input**

```
5
2

```

**Sample Output**

```
7
3
10
2

```

**Explanation**

5 + 2 = 7

5 - 2 = 3

5 * 2 = 10

5 / 2 = 2 (Integer part)

## Examples



## Constraints



## Solution

```bash
# HackerRank Problem: The World of Numbers
# Link: https://www.hackerrank.com/challenges/bash-tutorials---the-world-of-numbers/problem
# Difficulty: Easy
# Language: bash

read x 
read y
echo $((x+y))
echo $((x-y))
echo $((x*y))
echo $((x/y))

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>

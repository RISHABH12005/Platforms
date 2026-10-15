# Java Loops I

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [Java Loops I](https://www.hackerrank.com/challenges/java-loops-i/problem)

## Problem Description

**Objective** **
In this challenge, we're going to use loops to help us do some simple math.

Task** **
Given an integer, , print its first  multiples. Each multiple  (where ) should be printed on a new line in the form: `N x i = result`.

Input Format**

A single integer, .

**Constraints**

*

**Output Format**

Print  lines of output; each line  (where ) contains the  of  in the form: **
`N x i = result`.

Sample Input**

```
2

```

**Sample Output**

```
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
2 x 10 = 20

```

## Examples



## Constraints



## Solution

```java
// HackerRank Problem: Java Loops I
// Link: https://www.hackerrank.com/challenges/java-loops-i/problem
// Difficulty: Easy
// Language: java

import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(bufferedReader.readLine().trim());

        for (int i = 1; i <= 10; i++) {
            System.out.println(N + " x " + i + " = " + (N * i));
        }

        bufferedReader.close();
    }
}

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>

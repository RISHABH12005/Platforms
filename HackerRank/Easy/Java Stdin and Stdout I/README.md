#  Java Stdin and Stdout I

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [ Java Stdin and Stdout I](https://www.hackerrank.com/challenges/java-stdin-and-stdout-1/problem)

## Problem Description

Most HackerRank challenges require you to read input from [stdin](https://en.wikipedia.org/wiki/Standard_streams#Standard_input_.28stdin.29) (standard input) and write output to [stdout](https://en.wikipedia.org/wiki/Standard_streams#Standard_output_.28stdout.29) (standard output).

One popular way to read input from stdin is by using the [Scanner class](https://docs.oracle.com/javase/8/docs/api/java/util/Scanner.html) and specifying the *Input Stream* as *System.in*. For example:

```
Scanner scanner = new Scanner(System.in);
String myString = scanner.next();
int myInt = scanner.nextInt();
scanner.close();

System.out.println("myString is: " + myString);
System.out.println("myInt is: " + myInt);

```

The code above creates a *Scanner* object named  and uses it to read a *String* and an *int*. It then *closes* the *Scanner* object because there is no more input to read, and prints to stdout using *System.out.println(String)*. So, if our input is:

```
Hi 5

```

Our code will print:

```
myString is: Hi
myInt is: 5

```

Alternatively, you can use the [BufferedReader class](https://docs.oracle.com/javase/8/docs/api/java/io/BufferedReader.html).

**Task** **
In this challenge, you must read  integers from stdin and then print them to stdout. Each integer must be printed on a new line. To make the problem a little easier, a portion of the code is provided for you in the editor below.

Input Format**

There are  lines of input, and each line contains a single integer.

**Sample Input**

```
42
100
125

```

**Sample Output**

```
42
100
125

```

## Examples



## Constraints



## Solution

```java
// HackerRank Problem:  Java Stdin and Stdout I
// Link: https://www.hackerrank.com/challenges/java-stdin-and-stdout-1/problem
// Difficulty: Easy
// Language: java

import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        int c = scan.nextInt();
        scan.close();

        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
    }
}

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>

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

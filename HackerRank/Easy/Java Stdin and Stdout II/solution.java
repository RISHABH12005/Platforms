// HackerRank Problem: Java Stdin and Stdout II
// Link: https://www.hackerrank.com/challenges/java-stdin-stdout/problem
// Difficulty: Easy
// Language: java

import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int i = scan.nextInt();
        double d = scan.nextDouble();
        scan.nextLine(); // Consume the leftover newline character
        String s = scan.nextLine();

        System.out.println("String: " + s);
        System.out.println("Double: " + d);
        System.out.println("Int: " + i);
    }
}

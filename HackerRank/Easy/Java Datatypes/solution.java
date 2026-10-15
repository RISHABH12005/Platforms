// HackerRank Problem: Java Datatypes
// Link: https://www.hackerrank.com/challenges/java-datatypes/problem
// Difficulty: Easy
// Language: java

import java.util.*;
import java.io.*;

class Solution {
    public static void main(String[] argh) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        for (int i = 0; i < t; i++) {
            try {
                long x = sc.nextLong();
                System.out.println(x + " can be fitted in:");
                if (x >= -128 && x <= 127)
                    System.out.println("* byte");
                if (x >= -32768 && x <= 32767)
                    System.out.println("* short");
                if (x >= -2147483648L && x <= 2147483647L)
                    System.out.println("* int");
                if (x >= -9223372036854775808L && x <= 9223372036854775807L)
                    System.out.println("* long");
            } 
            catch (Exception e) {
                // If input is too large or invalid for a long
                System.out.println(sc.next() + " can't be fitted anywhere.");
            }
        }

        sc.close();
    }
}

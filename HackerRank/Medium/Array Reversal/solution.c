// HackerRank Problem: Array Reversal
// Link: https://www.hackerrank.com/challenges/reverse-array-c/problem
// Difficulty: Medium
// Language: c

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");  // Add a newline character at the end
    return 0;
}

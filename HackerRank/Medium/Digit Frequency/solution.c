// HackerRank Problem: Digit Frequency
// Link: https://www.hackerrank.com/challenges/frequency-of-digits-1/problem
// Difficulty: Medium
// Language: c

#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    scanf("%s", str);
    int freq[10] = {0};
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            freq[str[i] - '0']++;}
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", freq[i]);}
    return 0;
}

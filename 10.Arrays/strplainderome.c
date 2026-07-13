#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Palindrome
}

int main() {
    int n;
    printf("Enter number of words: ");
    scanf("%d", &n);

    char words[n][100]; // array of strings, each up to 99 chars

    // Input words from user
    for (int i = 0; i < n; i++) {
        printf("Enter word %d: ", i + 1);
        scanf("%s", words[i]);
    }

    // Check each word
    for (int i = 0; i < n; i++) {
        if (isPalindrome(words[i])) {
            printf("%s is a palindrome\n", words[i]);
        } else {
            printf("%s is not a palindrome\n", words[i]);
        }
    }

    return 0;
}

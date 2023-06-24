
/*  Created on: 23 Jun 2023
 *      Author: Saad
 *      program to  reverse string
 */
#include <stdio.h>
#include <string.h>

void reverseWords(char str[]) {
    int len = strlen(str);
    // Reverse the entire string
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    // Reverse each word in the string
    int start = 0;
    while (start < len) {
        // Find the start and end indices of the current word
        int end = start;
        while (end < len && str[end] != ' ') {
            end++;
        }
        // Reverse the current word
        int wordStart = start;
        int wordEnd = end - 1;
        while (wordStart < wordEnd) {
            char temp = str[wordStart];
            str[wordStart] = str[wordEnd];
            str[wordEnd] = temp;
            wordStart++;
            wordEnd--;
        }
        start = end + 1;
    }
}

int main() {
    char str[100];
    printf("Enter a string: \n");
    fflush(stdout);
    fgets(str, 100, stdin);
    // Remove the newline character from the input string
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    reverseWords(str);
    printf("Reversed string: %s\n", str);
    return 0;
}

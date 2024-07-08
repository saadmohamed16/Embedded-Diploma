/*
 * main.c
 *
 *  Created on: 23 Jun 2023
 *      Author: Saad
 *      program to  reverse given number
 */

#include <stdio.h>

int reverse(int n) {
    int reversed = 0;
    while (n != 0) {
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return reversed;
}

int main() {
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    int reversed = reverse(n);
    printf("Input: %d\nOutput: %d\n", n, reversed);
    return 0;
}

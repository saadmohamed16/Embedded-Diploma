/*  Created on: 23 Jun 2023
 *      Author: Saad
 *      program to number of one's
 */
#include <stdio.h>

int maxOnesBetweenZeros(int num) {
    int maxOnes = 0;
    int ones = 0;
    int foundZero = 0;
    while (num != 0) {
        if (num & 1) {
            ones++;
        } else {
            foundZero = 1;
            ones = 0;
        }
        if (foundZero == 1 && ones > maxOnes) {
            maxOnes = ones;
        }
        num >>= 1;
    }
    return maxOnes;
}

void printBinary(int num) {
    if (num > 1) {
        printBinary(num / 2);
    }
    printf("%d", num % 2);
}

int main() {
    int num;
    printf("Enter an integer number: \n");
    scanf("%d", &num);
    printf("Binary representation: ");
    printBinary(num);
    printf("\n");
    int maxOnes = maxOnesBetweenZeros(num);
    printf("Maximum number of ones between two zeros: %d\n", maxOnes);
    return 0;
}

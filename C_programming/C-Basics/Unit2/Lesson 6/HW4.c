/*
 * main.c
 *
 *  Created on: 03 August 2023
 *      Author: Saad
 *      program to print array in reverse order
 */

#include <stdio.h>

int main() {
    int arr[15];
    int *ptr = arr;
    int size;
    int i;

    printf("Enter the size of the array (not to exceed 15): ");
    fflush(stdout);
    scanf("%d", &size);

    printf("Enter the array elements: ");
    fflush(stdout);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements before reversing: ");
    fflush(stdout);
    for (i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    printf("\nArray elements after reversing: ");
    fflush(stdout);
    for (i = size - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}

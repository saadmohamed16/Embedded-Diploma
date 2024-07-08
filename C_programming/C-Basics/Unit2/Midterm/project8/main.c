/*  Created on: 23 Jun 2023
 *      Author: Saad
 *      program to  print the unique elements in array
 */
#include <stdio.h>

void printUniqueElements(int arr[], int size) {
    int freq[size];
    for (int i = 0; i < size; i++) {
        freq[i] = -1;
    }
    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }
    printf("Unique elements in the array are: ");
    for (int i = 0; i < size; i++) {
        if (freq[i] == 1) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[100];
	int size;
    printf("Enter size of array: ");fflush(stdout);
    scanf("%d", &size);
    printf("Enter elements in array: ");fflush(stdout);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printUniqueElements(arr, size);
}

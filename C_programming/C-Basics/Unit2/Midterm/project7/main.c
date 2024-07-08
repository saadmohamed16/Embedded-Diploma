/*  Created on: 23 Jun 2023
 *      Author: Saad
 *      program to  reverse the array elements
 */
#include <stdio.h>
void reverse(int arr[10], int n)					// function to reverse an Array
{
	int i, tmp;
	for(i=0;i< n/2;i++)
	{
		tmp = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i] = tmp;
	}
}
int main()
{
	int arr[100], i, size;

	printf("Enter size of array: \n");
	fflush(stdout);
	scanf("%d",&size);
	printf("Enter the elements of the array: \n");
	fflush(stdout);
	for (i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	printf("Before reversing the array: ");
		for(i=0;i < size;i++)
		{
			printf("%d ", arr[i]);
		}printf("\n");
	reverse(arr,size); 							// call reverse function
	printf("After reversing the array: ");		// display reversed array
	for(i=0;i < size;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

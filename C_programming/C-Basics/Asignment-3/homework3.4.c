/* Assignment 3
program to insert element in an array
Date 16/May/2023 */

#include<stdio.h>

int main(void)
{
	int arr[100];
	int num , element , location , i;
	printf("Enter the number of elements of Array\n");
	fflush(stdout);
	scanf("%d",&num);

	printf("enter the array elements\n");
	fflush(stdout);
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("the array elements\n");
		fflush(stdout);
		for(i=0;i<num;i++)
		{
			printf("%d\t",arr[i]);
		}
		printf("\n");
	printf("enter the new element\n");
	fflush(stdout);
	scanf("%d",&element);
	printf("enter the location for the new element\n");
		fflush(stdout);
		scanf("%d",&location);
	for(i=num;i>=location;i--)
	{
		arr[i]=arr[i-1];
	}
	num++;
	arr[location -1] = element;

	printf("the array elements after adding element\n");
			fflush(stdout);
			for(i=0;i<num;i++)
			{
				printf("%d\t",arr[i]);
			}
}

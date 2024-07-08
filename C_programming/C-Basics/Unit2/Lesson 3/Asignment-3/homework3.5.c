/* Assignment 3
program to search for element in an array
Date 16/May/2023 */

#include<stdio.h>

int main(void)
{
	int arr[100];
	int num , element , location=0 , i;
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
	printf("enter the element\n");
	fflush(stdout);
	scanf("%d",&element);

	for(i=0;i<=element;i++)
	{
		if(element == arr[i])
		{
			location = 1;
		}
	}
	if(location == 1)
	{
		printf("%d is found at location =%d",element,location+1);
	}
		else
			printf("element not found\n");


}

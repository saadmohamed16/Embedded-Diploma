/* Assignment 3 example 
program to calculate the average for Array
Date 16/May/2023 */

#include<stdio.h>

int main(void)
{
	float arr[100];
	int i , n ;
	float sum =0.0;
	float average;

	printf("Enter the number\n");
	fflush(stdout);
	scanf("%d",&n);

	while(n > 100 || n <= 0)
	{
		printf("Error\n");
		printf("Enter the number again range should be from 1 to100:");
		fflush(stdout);
		scanf("%d",&n);
	}
	for(i=0;i<n;i++)
	{
		printf("Enter the elements:");
		fflush(stdout);
		scanf("%f",&arr[i]);
		sum +=arr[i];
	}
	average = sum/n;
	printf("average = %.3f",average);
}

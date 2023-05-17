/* Assignment 3 example 1
program to find the sum of 2D array entered by the user
Date 16/May/2023 */

#include<stdio.h>

int main(void)
{
	int arr1[2][2];
	int arr2[2][2];
	int sum[2][2] ;
	int i ;
	int j ;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter the Values arr1[%d][%d]",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter the Values arr2[%d][%d]",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&arr2[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",sum[i][j]);
			if(j==1)
				printf("\n");
		}

	}
}

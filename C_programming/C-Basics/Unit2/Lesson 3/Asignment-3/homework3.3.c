/* Assignment 3
program to find the transpose
Date 16/May/2023 */

#include<stdio.h>

int main(void)
{
	int arr[100][100];
	int tarr[100][100];
	int r , c , i , j ;

	printf("enter the number of Rows & columns\n");
	fflush(stdout);
	scanf("%d %d",&r,&c);

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter arr[%d][%d]:\n",i,j);
			fflush(stdout);
			scanf("%d",&arr[i][j]);
		}
	}

	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",arr[i][j]);
			}
			if(j==c)
				printf("\n");
		}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			tarr[j][i] = arr[i][j];
		}
	}

	printf("the transpose array:\n");
	for(i=0;i<c;i++)
			{
				for(j=0;j<r;j++)
				{
					printf("%d\t",tarr[i][j]);
				}
				if(j==r)
					printf("\n");
			}

}

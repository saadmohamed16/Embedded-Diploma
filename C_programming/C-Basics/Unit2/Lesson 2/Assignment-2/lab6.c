
/* 6th program
Author Saad Mohamed
Date 9/may/2023
program to find sum from 1 to n

*/

#include<stdio.h>

int main(void)
{

	int i ;
	int n;
	int sum = 0 ;

	printf("Enter Integer:");
	fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<=n;i++)
	{
		sum += i;
	}
	printf("sum =%d\n",sum);
}

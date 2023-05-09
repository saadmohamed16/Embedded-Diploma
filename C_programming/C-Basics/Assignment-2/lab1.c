
/* 1st program
Author Saad Mohamed
Date 9/may/2023
program check no. ever or odd
 */

#include<stdio.h>

int main()
{
	int x ;
	printf("Enter the value for the Number\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);

	//check for the number

	if((x % 2) == 0)
	{
		printf("%d is an even number\n",x);
	}
	else
	{
		printf("%d is an odd number\n",x);
	}

}

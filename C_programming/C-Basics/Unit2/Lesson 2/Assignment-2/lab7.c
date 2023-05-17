
/* 7th program
Author Saad Mohamed
Date 9/may/2023
program to find Factorial for number

*/

#include<stdio.h>

int main(void)
{
	int i ;
	int fact = 1 ;
	int num ;

	printf("Enter the Number to calculate factorial\n");
	fflush(stdout);
	scanf("%d",&num);

	if(num < 0)				// check if negative integer or not
	{
		printf("Error!!! Factorial of negative number doesn't exist");
	}
	else if (num == 0 || num == 1)				// checking if num =0 or 1
	{
		printf("Factorial = 1\n");
	}
	else
	{
		for(i=1;i<=num;i++)
		{
			fact = fact * i;
		}
		printf("factorial of %d = %d",num,fact);
	}
}

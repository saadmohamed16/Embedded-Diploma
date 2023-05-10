/* 4th program
Author Saad Mohamed
Date 9/may/2023
program check if number is positive or negative or zero
 */

#include<stdio.h>

int main(void)
{
	float x ;

	printf("Enter a number\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	if(x > 0)
	{
		printf("%f is positive\n",x);
	}
	else if(x < 0)
	{
		printf("%f is Negative\n",x);
	}
	else
		printf("you enter Zero\n");
}

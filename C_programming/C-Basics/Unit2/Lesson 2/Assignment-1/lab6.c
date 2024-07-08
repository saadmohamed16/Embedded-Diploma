/* 6th program
Author Saad Mohamed
Date 7/may/2023
program swap two
 */


#include<stdio.h>

int main()
{
	float x = 1.20;
	float y = 2.45;

	printf("Enter value of x: 1.20\n");
	printf("Enter value of y: 2.45\n");

	float temp = x;
	x= y;
	y = temp;
	printf("value of x after swapping: %f\n",x);
	printf("value of y after swapping: %f\n",y);

}

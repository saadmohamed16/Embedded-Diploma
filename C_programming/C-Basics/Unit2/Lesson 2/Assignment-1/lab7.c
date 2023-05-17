/* 7th program
Author Saad Mohamed
Date 7/may/2023
program swap two number without temp
 */


#include<stdio.h>

int main()
{
	int x = 1;
	int y = 2;

	printf("Enter value of x: %d\n",x);
	printf("Enter value of y: %d\n",y);

	/*x = x + y;
	y = x - y;
	x = x - y;*/

	x=x^y;
	y=x^y;
	x=x^y;

	printf("value of x after swapping: %d\n",x);
	printf("value of y after swapping: %d\n",y);

}

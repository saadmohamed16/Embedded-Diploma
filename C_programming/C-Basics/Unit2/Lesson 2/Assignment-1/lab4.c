/* third program
Author Saad Mohamed
Date 7/may/2023
program enter 2 floating numbers and print sum
 */


#include<stdio.h>

int main()
{
	float x ;
	float y ;
	float product = 0 ;

	printf("Enter the value of two numbers\n");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x,&y);
	product = x * y;
	printf("product = %f",product);

}

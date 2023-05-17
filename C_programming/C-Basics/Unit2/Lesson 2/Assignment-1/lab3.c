/* third program
Author Saad Mohamed
Date 7/may/2023
program enter 2 numbers and print sum
 */


#include<stdio.h>

int main()
{
	int x ;
	int y ;
	int sum = 0 ;

	printf("Enter the value of two numbers\n");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x,&y);
	sum = x + y;
	printf("sum = %d",sum);

}

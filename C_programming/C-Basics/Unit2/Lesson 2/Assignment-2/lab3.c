
/* 3rd program
Author Saad Mohamed
Date 9/may/2023
program compare 3 numbers
 */

#include<stdio.h>

int main(void)
{
	float x ;
	float y ;
	float z ;
	float max ;

	printf("Enter the values for the three numbers\n");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);

	max = (((x > y) && (x > z)?x:(y > z)?y:z));

	printf("the largest number = %f\n",max);

}

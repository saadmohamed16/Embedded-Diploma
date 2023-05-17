/* 8th program
Author Saad Mohamed
Date 9/may/2023
Calculator program
*/

#include<stdio.h>

int main(void)
{
	char op;
	float num1 ;
	float num2 ;
	float res = 0 ;

	printf("Enter the values for 2 numbers\n");
	fflush(stdout);
	scanf("%f %f",&num1,&num2);

	printf("Enter the operand\n");
	fflush(stdout);
	scanf(" %c",&op);

	switch(op)
	{
	case '+' : res = num1 + num2;
			break;

	case '-' : res = num1 - num2;
		break;

	case '*' : res = num1 * num2;
		break;

	case '/' : res = num1 / num2;
		break;

	default: printf("Invalid operand\n");
	}
	printf("result = %f\n",res);
}

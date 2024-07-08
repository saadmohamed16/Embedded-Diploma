
/* 5th program
Author Saad Mohamed
Date 9/may/2023
program check if character alphabet or not
 */

#include<stdio.h>

int main(void)
{

	char ch ;
	printf("Enter the character\n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&ch);

	// condition to check for the character
	if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
	{
		printf(" %c is alphabet\n",ch);
	}
	else
		printf("%c is not alphabet\n",ch);
}

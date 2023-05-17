
/* 2nd program
Author Saad Mohamed
Date 9/may/2023
program check character is Vowel or constant
 */

#include<stdio.h>

int main()
{
	char ch ;

	printf("Enter the Character\n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&ch);

	//condition to check for character
	if(ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'i' || ch == 'I' ||ch == 'u' || ch == 'U' || ch == 'O' || ch == 'o')
	{
		printf("%c is a vowel",ch);
	}
	else
	{
		printf("%c is constant\n",ch);
	}

}

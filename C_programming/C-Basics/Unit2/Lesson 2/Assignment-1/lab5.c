/* fourth program
Author Saad Mohamed
Date 7/may/2023
program print ascii code
 */


#include<stdio.h>

int main()
{
	char letter;
	printf("Enter the character\n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&letter);
	printf("Ascii code for the %c = %d",letter,letter);

}

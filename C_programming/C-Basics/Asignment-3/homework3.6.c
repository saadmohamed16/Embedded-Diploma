/* Assignment 3
program to search for element in an array
Date 16/May/2023 */

#include<stdio.h>

int main(void)
{
	char arr[100];
	int i , count =0;
	char ch ;

	printf("Enter the string\n");
	fflush(stdout);
	gets(arr);

	puts(arr);

	printf("\nenter the character to check\n");
	fflush(stdout);
	scanf("%c",&ch);
	i=0;
	while(arr[i]!= '\0')
	{
		if(ch == arr[i])
			count++;
		i++;
	}
	printf("%c is found %d times",ch,count);

}

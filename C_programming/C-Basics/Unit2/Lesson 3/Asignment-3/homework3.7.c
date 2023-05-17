/* Assignment 3
program to find length of an array
Date 16/May/2023 */

#include<stdio.h>

int main(void)
{
	char arr[100];
	int i , count =0;

	printf("Enter the string\n");
	fflush(stdout);
	gets(arr);

	puts(arr);

	i=0;
	while(arr[i]!= '\0')
	{
		count++;
		i++;
	}
	printf("the length for string =%d",count);

}

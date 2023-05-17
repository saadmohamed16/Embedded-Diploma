/* Assignment 3
program to revese an array
Date 16/May/2023 */

#include<stdio.h>

int main(void)
{
	char arr[100];
	int i , j , count =0;

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
	printf("the length for string =%d\n",count);

	i=0;
	j=count -1;

	while(i<j)
	{
		arr[i]^=arr[j];
		arr[j]^=arr[i];
		arr[i]^=arr[j];
		i++;
		j--;
	}
	puts(arr);


}

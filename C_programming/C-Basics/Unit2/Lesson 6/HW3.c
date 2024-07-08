/*
 * main.c
 *
 *  Created on: 03 August 2023
 *      Author: Saad
 *      program to print string in reverse order
 */

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100], str2[100];
	char *pt1 , *pt2;

	printf("Enter the string\n");
	fflush(stdout);
	gets(str1);

	pt1= str1 + strlen(str1)-1;
	pt2=str2;

	while(pt1 >= str1)
	{
		*pt2 = *pt1;
		pt2++;
		pt1--;
	}
	*pt2='\0';
	printf("the string before reversing : %s\n",str1);
	printf("the string after reversing is : %s\n",str2);
}

/*
 * main.c
 *
 *  Created on: 23 Jun 2023
 *      Author: Saad
 *      program to  find the sum of any number digits
 */

#include<stdio.h>
int sum_digits(int num)
{
	int sum = 0;
	while(num != 0)
	{
		sum += (num%10);
		num /=10;
	}
	return sum;
}
int main()
{
	int num , res;
	printf("Plz enter the sumber\n");
	scanf("%d",&num);
	res = sum_digits(num);
	printf("input:%d -> output:%d",num,res);
}

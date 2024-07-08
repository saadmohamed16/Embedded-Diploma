/*
 * main.c
 *
 *  Created on: 23 Jun 2023
 *      Author: Saad
 *      program to  calculate square root for given number
 */

#include<stdio.h>
#include<math.h>
float findSQRT(double N)
{
	return pow(2, 0.5 * log2(N));
}
int main()
{
	int num;
	double res ;
	printf("Plz enter the sumber\n");
	scanf("%d",&num);
	res = findSQRT(num);
	printf("input:%d -> output:%f",num,res);

}

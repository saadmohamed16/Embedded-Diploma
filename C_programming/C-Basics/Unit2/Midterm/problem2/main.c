/*
 * main.c
 *
 *  Created on: 23 Jun 2023
 *      Author: Saad
 *      program to  print prime number in range
 */

#include<stdio.h>

void prime(int start,int end)
{
	int i,j,is_prime;
	for(i=start;i<=end;i++)
	{
		is_prime = 1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j == 0)
			{
				is_prime = 0;
				break;
			}
		}
		if(is_prime == 1)
						printf("%d ",i);
	}
}
int main()
{
	int num , end;
	printf("Plz enter the sumber\n");
	scanf("%d %d",&num,&end);
	prime(num,end);

}

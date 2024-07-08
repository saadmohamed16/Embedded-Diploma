/*
 * main.c
 *
 *  Created on: 23 Jun 2023
 *      Author: Saad
 *      program to  calculate sum without loop
 */

#include <stdio.h>

int sum(int num)
{

    if(num == 1)
    	return 1;
    else if(num == 0)
    	return 0;
    else
    return num + sum(num -1);
}

int main() {
    int n, res ;
    printf("enter the number\n");
    scanf("%d",&n);
    res = sum(n);
    printf("%d\n",res);
    return 0;
}

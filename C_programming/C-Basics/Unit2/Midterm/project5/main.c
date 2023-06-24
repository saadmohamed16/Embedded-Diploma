/*
 * main.c
 *
 *  Created on: 23 Jun 2023
 *      Author: Saad
 *      program to  count number of one's in any number
 */

#include <stdio.h>

int count_ones(int n) {
    int count = 0;
    while (n != 0)
    	{
    	if(n%2 == 1)

        {
    		count++;
    }
    n /=2;
    	}
    return count;
}

int main() {
    int n, res ;
    printf("enter the number\n");
    scanf("%d",&n);
    res = count_ones(n);
    printf("Input: %d\nOutput: %d\n", n, res);
    return 0;
}

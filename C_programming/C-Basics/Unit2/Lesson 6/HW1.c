/* Author : Saad Mohamed
 * Pointers Assignment
 * a program in C to demonstrate how to handle the pointers in the program
 * Date: 1/8/2023
 */

#include<stdio.h>

int main()
{
	int m = 29;
	int *ab = &m;

	printf("Address of m: %p\n",&m);
	printf("value of m: %d\n",m);

	printf("Address of m: %p\n",ab);
	printf("Content of pointer ab : %d\n",*ab);

	*ab=34;
	printf("Address of m: %p\n",ab);
	printf("Content of pointer ab : %d\n",*ab);

	*ab=7;
	printf("Address of m: %p\n",ab);
	printf("Content of pointer ab : %d\n",*ab);
}


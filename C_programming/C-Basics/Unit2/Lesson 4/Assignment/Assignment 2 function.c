/* Program to print the factorial for number
 * Author : Saad Mohamed
 * Date 2/6/2023
 */
#include<stdio.h>
#include<math.h>

int factorial(int num);

int main()
{
	int n , res;
	printf("the the number to calc. factorial\n");
	fflush(stdout);
	scanf("%d",&n);
	res = factorial(n);
	printf("the factorial of %d = %d\n",n,res);
}

int factorial(int num)
{
	int fact = 1;
	if(num!=1)
		fact = num * factorial(num-1);
	return fact;
}

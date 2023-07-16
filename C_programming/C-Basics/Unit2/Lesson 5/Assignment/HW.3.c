/* Author : Saad Mohamed
 * Structure Homework ex.3
 * passing a structure as a function
 * Date: 16/7/2023
 */

#include<stdio.h>

struct complex{
	float real;
	float imag;
}complex;

struct complex add(struct complex a , struct complex b)
{
	struct complex sum;
	sum.real = a.real + b.real;
	sum.imag = a.imag + b.imag;
	return sum;
}


int main()
{
	struct complex x ;
	struct complex y ;
	struct complex sum ;

	printf("Enter the values for first num\n");
	fflush(stdout);
	scanf("%f %f",&x.real,&x.imag);

	printf("Enter the values for second num\n");
	fflush(stdout);
	scanf("%f %f",&y.real,&y.imag);

	sum = add(x,y);
	printf("the sum of complex numbers = %.2f + %.2fi\n",sum.real,sum.imag);
}

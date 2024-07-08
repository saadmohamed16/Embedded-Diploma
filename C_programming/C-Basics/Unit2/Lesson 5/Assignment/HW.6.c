/* Author : Saad Mohamed
 * Structure Homework ex.3
 * passing a structure as a function
 * Date: 16/7/2023
 */

#include<stdio.h>

union student
{
	int roll;
	float marks;
	char name[32];
}s1;

struct employee
{
	int roll;
	float salary;
	char name[32];
}emp1;

int main()
{
	printf("%d\n",sizeof(s1));
	printf("%d\n",sizeof(emp1));
}

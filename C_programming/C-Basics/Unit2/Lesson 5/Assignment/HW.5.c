/* Author : Saad Mohamed
 * Structure Homework ex.3
 * passing a structure as a function
 * Date: 16/7/2023
 */

#include<stdio.h>

#define pi 3.14
#define area(r) (pi*r*r)

int main()
{
	float radius , area;
	printf("Enter the radius\n");
	scanf("%f",&radius);
	area = area(radius);
	printf("area = %.2f",area);
}

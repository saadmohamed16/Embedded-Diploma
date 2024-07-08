/* Author : Saad Mohamed
 * Structure Homework ex.2
 * Date: 14/7/2023
 */

#include<stdio.h>
#include<string.h>
struct student{
	int feet;
	float inch;
}d1,d2,sum;

int main()
{
	printf("Enter the Data for distance 1\n");
	fflush(stdout);
	scanf("%d",&d1.feet);
	scanf("%f",&d1.inch);

	printf("Enter the Data for distance 2\n");
	fflush(stdout);
	scanf("%d",&d2.feet);
	scanf("%f",&d2.inch);
	sum.feet = d1.feet + d2.feet;
	sum.inch = d1.inch + d2.inch;

	if(sum.inch >= 12.0)
	{
		sum.inch = sum.inch -12.0;
		sum.feet ++;
	}
	printf("sum of distance = %d\'-%0.2f",sum.feet,sum.inch);
}

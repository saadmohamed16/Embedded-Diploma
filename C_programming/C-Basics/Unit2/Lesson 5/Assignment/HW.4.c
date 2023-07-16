/* Author : Saad Mohamed
 * Structure Homework ex.3
 * passing a structure as a function
 * Date: 16/7/2023
 */

#include<stdio.h>
#include<string.h>

struct students
{
	char name[50];
	int roll ;
	float marks;
};

int main()
{
	struct students arr[10];
	int i;
	printf("Enter the data for array of structure\n");
	fflush(stdout);
	for(i=0;i<10;i++)
	{
		printf("Enter the roll for student\n");
		fflush(stdout);
		scanf("%d",&arr[i].roll);
		printf("Enter the name for student\n");
		fflush(stdout);
		scanf("%s",arr[i].name);
		printf("Enter the data for student\n");
		fflush(stdout);
		scanf("%f",&arr[i].marks);
	}

	for(i=0;i<10;i++)
		{
			printf("the roll of %d student\n",arr[i].roll);
			puts(arr[i].name);
			printf("the grade =%.2f",arr[i].marks);
		}
}

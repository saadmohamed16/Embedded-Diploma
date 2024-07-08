#include<stdio.h>

struct student
{
	char name[50];
	int roll ;
	float marks;
}st1;
	
int main()
{
	printf("Enter the Data\n");
	fflush(stdout);
	fgets(st1.name,sizeof(st1.name),stdin);
	printf("Enter the roll number\n");
	scanf("%d",&st1.roll);
	printf("Enter the marks\n");
    scanf("%f",&st1.marks);
	
	printf("the name %s\n",st1.name);
	printf("the roll number %d \n",st1.roll);
	printf("the marks %.2f\n",st1.marks);
}
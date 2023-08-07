/*
 * main.c
 *
 *  Created on: 03 August 2023
 *      Author: Saad
 *      program in C to show a pointer to an array which contents
 *      are pointer to structure
 */

#include <stdio.h>
#include<string.h>
struct Semployee
{
	char emp_name[50];
	int id;
};

int main()
{
	struct Semployee employees[3];
	struct Semployee *ptr = NULL;
	int i;
	ptr = employees;

	printf("Enter data for Array Elements\n");
	fflush(stdout);
	for(i=0;i<3;i++)
	{
		printf("Enter Name for %d\n",i+1);
		fflush(stdout);
		gets(ptr->emp_name);
		fflush(stdin);fflush(stdout);
		printf("Enter id for %d\n",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&ptr->id);
		fflush(stdin);fflush(stdout);
		ptr++;

	}
	 ptr = employees;

	  for (i = 0; i < 3; i++) {
	    printf("\nDetail of student #%d\n", (i + 1));
	    fflush(stdout);
	     //display result via std variable
	    printf("\nResult via ptr\n");
	    printf("ID: %d\n", ptr->id);
	    printf("First Name: %s\n", ptr->emp_name);

	    printf("ID: %d\n", ptr->id);

	    // update pointer to point at next element
	    // of the array std
	    ptr++;
	  }
}

/*int main(void) {

  // student structure
  struct student {
    char id[15];
    char firstname[64];
    char lastname[64];
    float points;
  };

  // student structure variable
  struct student std[3];

  // student structure pointer variable
  struct student *ptr = NULL;

  // other variables
  int i;

  // assign std to ptr
  ptr = std;

  // get detail for user
  for (i = 0; i < 3; i++) {
    printf("Enter detail of student #%d\n", (i + 1));fflush(stdout);
    printf("Enter ID: ");fflush(stdout);
    scanf("%s", ptr->id);
    printf("Enter first name: ");fflush(stdout);
    scanf("%s", ptr->firstname);
    printf("Enter last name: ");fflush(stdout);
    scanf("%s", ptr->lastname);
    printf("Enter Points: ");fflush(stdout);
    scanf("%f", &ptr->points);

    // update pointer to point at next element
    // of the array std
    ptr++;
  }

  // reset pointer back to the starting
  // address of std array
  ptr = std;

  for (i = 0; i < 3; i++) {
    printf("\nDetail of student #%d\n", (i + 1));
    fflush(stdout);
     /*display result via std variable
	 printf("\nResult via std\n");fflush(stdout);
    printf("ID: %s\n", std[i].id);
    printf("First Name: %s\n", std[i].firstname);
    printf("Last Name: %s\n", std[i].lastname);
    printf("Points: %f\n", std[i].points);

    // display result via ptr variable
    printf("\nResult via ptr\n");
    printf("ID: %s\n", ptr->id);
    printf("First Name: %s\n", ptr->firstname);
    printf("Last Name: %s\n", ptr->lastname);
    printf("Points: %f\n", ptr->points);

    // update pointer to point at next element
    // of the array std
    ptr++;
  }

  return 0;
}
*/

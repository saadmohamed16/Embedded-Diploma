/* Program to calculate the powe
 * Author : Saad Mohamed
 * Date 2/6/2023
 */
#include<stdio.h>
#include<math.h>

int power(int num,int exp);

int main()
{
	int num ,exp , res ;
	printf("Enter the number and the exponant\n");
	fflush(stdout);
	scanf("%d %d",&num,&exp);

	res = power(num,exp);
	printf("%d^%d = %d",num,num,res);
}

int power(int num,int exp)
{
	if(exp != 0)
		return num*power(num,(exp-1));
	else
		return 1;

}

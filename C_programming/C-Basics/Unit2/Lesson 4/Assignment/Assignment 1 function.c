/* Program to print the prime numbers between interval
 * Author : Saad Mohamed
 * Date 2/6/2023
 */
#include<stdio.h>
#include<math.h>

void is_prime(int small,int large);  //function prototype
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	//function calling
	is_prime(x,y);
}

//function Definition

void is_prime(int small,int large)    
{
	int j,flag ;

	while(small <= large)
	{
		j=2;
		//inum = sqrt(small);
		flag = 1;
		while(j <= small/2)
		{
			if(small % j == 0)
			{
				flag = 0;
				break;
			}
			j++;
		}
		if(flag == 1)
		{
			printf("%d ",small);
		}
		small++;
	}
}

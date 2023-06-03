/* Program to reverse the sentence
 * Author : Saad Mohamed
 * Date 2/6/2023
 */
#include<stdio.h>
#include<math.h>

void reverse(void);

int main()
{
	printf("the sentence\n");

	reverse();
}

void reverse(void)
{
	char lett;
	scanf("%c",&lett);
	if(lett != '\n')
		{reverse();
		printf("%c",lett);
}
}

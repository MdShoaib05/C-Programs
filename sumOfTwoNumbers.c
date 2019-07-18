/*Author:Md Shoaib
  Purpose:Sum of two numbers
  Date:18/06/2019 */
#include <stdio.h>

int main()
{
	int FirstNumber, SecondNumber, sum = 0;

	printf("Enter your first number:\n");
	scanf("%d", &FirstNumber);

	printf("Enter your second number:\n");
	scanf("%d", &SecondNumber);

	sum = FirstNumber + SecondNumber;

	printf("You total no is:%d\n", sum);

	return 0;
}

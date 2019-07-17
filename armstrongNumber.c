/*Author:Md Shoaib
  Purpose:Armstrong Number
  Date:12/06/2019 */
#include <stdio.h>

int main()
{
	//variable declaration
	int number, once, thenth, hundred, sum;

	printf("Enter a three digit number: ");
	scanf("%d", &number);
	//logic
	once = number / 100;

	thenth = (number % 100) / 10;

	hundred = number % 10;
	//sum
	sum = once * once * once + thenth * thenth * thenth + hundred * hundred * hundred;

	if (sum == number)
	{
		printf("The number is armstrong\n");
	}
	else
	{
		printf("The number is not armstrong\n");
	}
	printf("Sum of three digitsis:%d\n", sum);

	return 0;
}

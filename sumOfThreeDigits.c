/*Author:Md Shoaib
  Purpose:Sum of Three Digits
  Date:18/06/2019 */
#include <stdio.h>

int main()
{
	int number, once, thenth, hundred, sum;

	printf("Enter a three digit number: ");
	scanf("%d", &number);
	//logic
	once = number / 100;

	thenth = (number % 100) / 10;

	hundred = number % 10;
	//sum
	sum = once + thenth + hundred;

	printf("Sum of three digitsis:%d\n", sum);

	return 0;
}

/*Author:Md Shoaib
  Purpose:if program example
  Date:18/06/2019 */
#include <stdio.h>

int main()
{
	int num1, num2;

	//input numbers from users
	printf("Type two numbers: ");
	scanf("%d%d", &num1, &num2);

	//check the numbers which one is big or which one is small
	if (num1 > num2)
	{
		printf("%d is maximum", num1);
	}

	if (num2 > num1)
	{
		printf("%d is maximum", num2);
	}

	if (num1 == num2)
	{
		printf("Both are equal");
	}

	return 0;
}

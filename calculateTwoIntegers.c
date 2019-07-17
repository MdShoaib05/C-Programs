/*Author:Md Shoaib
  Purpose:Calculate two integers
  Date:15/06/2019 */
#include <stdio.h>

int main()
{
	//declaretaion of variables
	float value1, value2, sum;

	//entering the values
	printf("Type your first value:\n");
	scanf("%f", &value1);

	printf("Type your second value:\n");
	scanf("%f", &value2);

	//calculate two values
	sum = value1 + value2;

	//result
	printf("Your sum of two values are:%f\n", sum);

	return 0;
}

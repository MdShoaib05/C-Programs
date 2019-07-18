/*Author:Md Shoaib
  Purpose:Odd or Even
  Date:19/06/2019 */
#include <stdio.h>

int main()
{
	//declaration of variables
	int value, result = 0;

	//Entering the values
	printf("Please enter a  value:\n");
	scanf("%d", &value);

	//logic
	result = value % 2;

	//if condition for  our output
	if (result == 0)
	{
		printf("You typed an EVEN number:%d", value);
	}

	else
	{
		printf("You typed an ODD number:%d", value);
	}

	getchar();
	return 0;
}

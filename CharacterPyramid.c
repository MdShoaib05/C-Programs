/*Author:Md Shoaib
  Purpose:Character pyramid
  Date:/07/2019 */
#include <stdio.h>

int main()
{
	//variable declaration
	int i, j;
	char limit, value = 'A';
	printf("Enter any uppercase character:");
	scanf("%c", &limit);
	//loop for pyramid
	for (i = 1; i <= (limit - 'A') + 1; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%c", value);
		}
		value++;
		printf("\n");
	}

	return 0;
}

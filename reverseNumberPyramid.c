/*Author:Md Shoaib
  Purpose:Reverse Number Pyramid
  Date:18/06/2019 */
#include <stdio.h>

int main()
{
	int i, j, rows;
	//Input from user
	printf("Number of rows to be printed: ");
	scanf("%d", &rows);
	//Logic
	for (i = rows; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}

/*Author:Md Shoaib
  Purpose: Odd in 100
  Date:19/06/2019 */
#include <stdio.h>

int main()
{
	int ODD, result;

	printf("Our ODD value is 100 now we calculate.\n");
	//Logic
	for (ODD = 1; ODD <= 100; ODD = ODD + 2)
	{
		printf("ODD Value is %d\n", ODD);
	}
	return 0;
}

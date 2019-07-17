/*Author:Md Shoaib
  Purpose:Array for print roll numbers
  Date:15/06/2019 */
#include <stdio.h>

int main()
{
	//Variable Declaration (array)
	int RollNumber[20];
	//Loop
	for (int i = 0; i <= 20; i++)
	{ //logic
		RollNumber[i] = i + 10;
	}
	//Next Loop
	for (int j = 0; j <= 20; j++)
	{
		printf("Element value at [%d]: %d\n", j, RollNumber[j]);
	}
	return 0;
}

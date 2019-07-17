/*Author:Md Shoaib
  Purpose:continue keyword using for loop
  Date:18/06/2019 */

#include <stdio.h>

int main()
{
	//not using variable declaration because we can intialization our variable in for loop

	//for loop for check our value < 20
	for (int value = 5; value < 20; value++)
	{
		if (value == 11)
		{
			value++;
			continue;
		}
		printf("%d\n", value);
	}
}

/*Author:Md Shoaib
  Purpose:Function example program
  Date:18/06/2019 */
#include <stdio.h>

int cal(int value1, int value2)
{
	int result;

	if (value1 > value2)
	{
		result = value1;
	}
	else
		result = value2;

	return result;
}

int main()
{
	int highScore1 = 800;
	int highScore2 = 200;

	int highest;

	highest = cal(highScore1, highScore2);
	printf("The high score is %d\n", highest);

	getchar();
	return 0;
}

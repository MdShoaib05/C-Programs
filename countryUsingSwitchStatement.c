/*Author:Md Shoaib
  Purpose: Basic Switch program(Example)
  Date:18/06/2019 */

#include <stdio.h>

int main()
{
	//variables declaration
	int earth = 1;
	//1  = INDIA, 2  = JAPAN, 3 = HYDERABAD, 4  = USA

	//switch statement
	switch (earth)
	{
	case 1:
		printf("Yes INDIA is a good place you can visit this place.\n");
		break;

	case 2:
		printf("Yes JAPAN is good for a tech person you can visit thsis place.\n");
		break;

	case 3:
		printf("Yes HYDERABAD is good place for IT persons and also for foodies.\n");
		break;

	case 4:
		printf("The most powerful country in our world. You can visit thsi place.\n");
		break;

	default:
		break;
	}

	return 0;
}

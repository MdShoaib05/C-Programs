/*Author:Md Shoaib
  Purpose:Switch case for rating calculate
  Date:18/06/2019 */
#include <stdio.h>

int main()
{
	int rating = 5;

	switch (rating)
	{
	case 5:
		printf("Voila this is a great course\n");
		break;

	case 4:
		printf("You gave 4 rating\n");
		break;

	case 3:
		printf("You gave 3 rating\n");
		break;

	default:
		printf("You entered wrong rating\n");
		break;
	}

	return 0;
}

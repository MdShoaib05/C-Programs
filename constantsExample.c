/*Author:Md Shoaib
  Purpose: Constants example
  Date:16/06/2019 */

#include <stdio.h>

//define preprocessor way
// #define LIFE 5
// #define BLOOD 3

int main()
{

	const int LIFE = 10;
	const int BLOOD = 3;

	int value = LIFE * BLOOD;

	printf("Total remaining value : %d", value);
	return 0;
}

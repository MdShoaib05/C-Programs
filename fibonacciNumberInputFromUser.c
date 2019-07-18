/*Author:Md Shoaib
  Purpose:
  Date:18/06/2019 */
  
#include <stdio.h>

int main()
{
	//variable  declaration
	int digitOne = 0, digitTwo = 1, calculated = 0, user, maxlimit;

	//Input from user
	printf("Please enter your desire number: ");
	scanf("%d", &user);
	//showing first two fibonacci number
	printf("%d\n", digitOne);
	printf("%d\n", digitTwo);
	//loop for how much number user input
	for (maxlimit = 1; maxlimit <= user; maxlimit++)
	{
		//Logic
		calculated = digitOne + digitTwo;
		//Print the calculation
		printf("%d\n", calculated);
		//swap
		digitOne = digitTwo;
		digitTwo = calculated;
	}
	return 0;
}

/*Author:Md Shoaib
  Purpose:Input from user and +1 value using for loop
  Date:18/06/2019 */
#include <stdio.h>

int main()
{
	//Variable Declaration
	int user, maxlimit;
	//Input from user
	printf("Please enter any number:");
	scanf("%d", &user);
	//Loop  for printing one by one numbers
	for (maxlimit = 1; maxlimit <= user; maxlimit++)
	{
		printf("Your number is:%d\n", maxlimit);
	}
	return 0;
}

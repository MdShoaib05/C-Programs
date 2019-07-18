/*Author:Md Shoaib
  Purpose:problem:- write a logic to find the factorial of a number. For example the factorial of 4 = 4*3*2*1 = 24
  Date:18/06/2019 */

#include <stdio.h>

int main()
{
	//Variable Declaration
	int user, factorial = 0, maxlimit;
	//Input from user
	printf("Please enter any number:");
	scanf("%d", &user);
	//loop
	for (maxlimit = 1; maxlimit <= user; maxlimit++)
	{
		printf("Your numbers is:%d\n", maxlimit);
		factorial = maxlimit * 3 * 2 * 1;
		printf("Your factorial numbers is:%d\n", factorial);
	}
	return 0;
}

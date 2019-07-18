/*Author:Md Shoaib
  Purpose:Simple example program for pointer
  Date:19/06/2019 */

#include <stdio.h>

int main()
{
	//variable declaration
	int a = 100;
	//declaring pointer
	int *integerPointer;
	//assign address of a in our integerPointer
	integerPointer = &a;

	//print our variables and pointers
	//print simpley using default variable name a
	printf("Value of a is:%d\n", a);
	//print using pointer
	printf("Value of a is:%d\n", *integerPointer);

	return 0;
}

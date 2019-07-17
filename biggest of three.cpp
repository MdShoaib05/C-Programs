/*Author:Md Shoaib
  Purpose:Biggest of three integers
  Date:10/06/2019 */
#include <stdio.h>

int main()
{
	//declaration of values
	int value1, value2, value3, big = 0;
	
	//entering the values
	printf("Type your first value:\n");
	scanf("%d", & value1);
	
	printf("Type your second value:\n");
	scanf("%d", & value2);
	
	printf("Type your third value:\n");
	scanf("%d", & value3);
	
	//logic using if condition
	
	if(value1 > big)
	{
		big = value1;
	}
	
	if(value2 > big)
	{
		big = value2;
	}
	
	if(value3 > big)
	{
		big = value3;
	}
	
	//output
	printf("The biggest value is:%d\n", big);
	
	getchar();
	return 0;
}


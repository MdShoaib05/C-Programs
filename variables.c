/*Author:Md Shoaib
  Purpose:Variables basic program
  Date:21/06/2019 */
#include <stdio.h>

int main()
{

	// type variable_list

	int Total_Life = 10;
	int Used_Life = 4;

	int Remaining_Life = Total_Life - Used_Life;

	printf("There are total remaining life : %d \n", &Remaining_Life);

	getchar();
}

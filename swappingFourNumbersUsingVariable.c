/*Author:Md Shoaib
  Purpose: Program for swapping Four Numbers using variable
           We need our output as A = 19, B = 22, C = 24, D = 19
  Date:18/06/2019 */

#include <stdio.h>

int main()
{
	//variable declaration
	int A = 11, B = 19, C = 22, D = 24, Temp1, Temp2, Temp3;
	//Print before swap
	printf("Values before Swapping: A = %d, B = %d, C = %d, D = %d\n", A, B, C, D);
	//Algorithm for swap three numbers
	Temp1 = B;
	Temp2 = C;
	Temp3 = D;
	A = B;
	B = Temp2;
	C = Temp3;
	D = Temp1;
	//Print after swap
	printf("Values after Swapping: A = %d, B = %d, C = %d, D = %d\n", A, B, C, D);

	return 0;
}

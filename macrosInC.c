/*Author:Md Shoaib
  Purpose:Macros in C(This is just example it will not run)
  Date:18/06/2019 */

#include <stdio.h>

int main()
{
	char FILE, DATE, TIME;
	int LINE, STDC;

	printf("%s\n", _FILE_); //Output our filename path
	printf("%s\n", _DATE_); //Output date in Day,Month,Year
	printf("%s\n", _TIME_); //Output time in Hour,Min,Sec
	printf("%d\n", _LINE_); //Output Line no code
	printf("%d\n", _STDC_); //Output 1 when compiler complies with ANSI standard otherwise it wil be 0

	return 0;
}

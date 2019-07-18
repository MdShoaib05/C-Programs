/*Author:Md Shoaib
  Purpose:Program for convert Farenheit to Centigrade.
  Date:19/06/2019 */
#include <stdio.h>

int main()
{
	//Variable declaration
	float FarenheitTemp, CentigradeTemp;

	//Input Farenheit temprature from user
	printf("Please enter Farenheit Temprature to convert into Centigrade: ");
	scanf("%f", &FarenheitTemp);
	//logic
	CentigradeTemp = (FarenheitTemp - 32) * 5 / 9;
	//Output our Centigrade Temprature.
	printf("Your Farenheit temprature to Centigrade conversion is:%f", CentigradeTemp);

	return 0;
}

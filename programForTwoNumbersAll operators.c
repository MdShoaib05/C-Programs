/*Author:Md Shoaib
  Purpose:Program for Two Numbers (+,-,/,*,%)
  Date:18/06/2019 */
#include <stdio.h>

int main()
{
	//Variable Declaration
	int firstNumber, secondNumber, Addition, Subtraction, Multiplication;
	float Division, Remainder;
	int feedback;
	//Input from user
	printf("Please enter your first number:");
	scanf("%d", &firstNumber);

	printf("Please enter your second number number:");
	scanf("%d", &secondNumber);
	//Print that our calculation is start
	printf("\nYour two numbers calculations are:-\n");

	//Addition logic and then print
	Addition = firstNumber + secondNumber;
	printf("\nYour first %d number and second %d number Addition is:%d\n", firstNumber, secondNumber, Addition);

	//Subtraction logic and then print
	Subtraction = firstNumber - secondNumber;
	printf("\nYour first %d number and second %d number Subtraction is:%d\n", firstNumber, secondNumber, Subtraction);

	//Multiplication logic and then print
	Multiplication = firstNumber * secondNumber;
	printf("\nYour first %d number and second %d number Multiplication is:%d\n", firstNumber, secondNumber, Multiplication);

	//Division logic and then print
	Division = firstNumber / secondNumber;
	printf("\nYour first %d number and second %d number Division is:%f\n", firstNumber, secondNumber, Division);

	//Remainder logic and then print
	Remainder = firstNumber / secondNumber;
	printf("\nYour first %d number and second %d number Division is:%f\n", firstNumber, secondNumber, Remainder);

	//Print a message to get feedback for our computer
	printf("\nIS THAT OK? 0 for Yes or 1 for No:");
	scanf("%d", &feedback);

	//Condition for our computer feedback
	if (feedback == 0)
	{
		printf("\nVoila! you are a good person for understood my Computational Power.\n");
	}

	if (feedback == 1)
	{
		printf("\nYou hert my Computational Power.\n");
	}

	return 0;
}

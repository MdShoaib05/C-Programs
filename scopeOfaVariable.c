/*Author:Md Shoaib
  Purpose:
  Date:18/06/2019 */
#include <stdio.h>
//declaring a global variable
int player1 = 3;
int player2 = 5;
//custom function
int sum(int a, int b)
{
	return a + b;
}

int main()
{
	//variable declaration
	int player1 = 10;
	int player2 = 20;
	int comboScore = 0;

	printf("Here starts the main stage of game\n");

	printf("Value of player1 after manin stage = %d\n", player1);
	printf("Value of player2 after manin stage = %d\n", player2);
	//custom function
	comboScore = sum(player1, player2);

	printf("The Combo score after main stage = %d\n", comboScore);

	getchar();
	return 0;
}

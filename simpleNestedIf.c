/*Author:Md Shoaib
  Purpose:simple nested if condition(Example Program)
  Date:18/06/2019 */
#include <stdio.h>
#include <conio.h>

int main()
{

    int highscore = 5;

    if (highscore > 60)
    {
        printf("You crossed the high score of :%d\n", highscore);
    }
    if (highscore == 50)
    {
        printf("Your score is %d\n", highscore);
    }
    else
    {
        printf("You played well but missed the high score.\n");
    }

    return 0;
}

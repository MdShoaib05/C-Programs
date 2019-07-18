/*Author:Md Shoaib
  Purpose:if else example program
  Date:18/06/2019 */
#include <stdio.h>
#include <conio.h>

int main()
{

    int highscore = 500;

    if (highscore > 60)
    {
        printf("You crossed the high score of :%d\n", highscore);
    }
    else
    {
        printf("You played well but missed the high score.\n");
    }

    return 0;
}

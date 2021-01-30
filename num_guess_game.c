#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h> //Library for getch()

int main()
{
    int num; int guess; int guess_num=1;
    srand(time(0));
    num = rand()%100+1; //This generates a random number b/w 1 and 100.
    printf("Guess the number between 1 to 100 and beat this game in the minimum number of guesses.\n\nIf you want to quit the game, enter 0.\n\nGuess the number\n");
    // printf("%d\n", num);
    do
    {
        printf("Guess %d : ", guess_num);
        scanf("%d", &guess);
        if (guess==0)
        {
            printf("You quit the game. Try again next time.");
            break;
        }
        else if (guess == num)
        {
            if (guess_num==1)
            {
                printf("Bingo!! You guessed the number in the first try");
                break;
            }
            else
            {
                printf("You guessed the number in %d guesses", guess_num);
                break;
            }
            
        }
        else if (guess<num)
        {
            printf("Think of a higher number\n");
        }
        else
        {
            printf("Think of a lower number\n");
        }
        guess_num++;
    }
    while(guess!=num);
    getch();
    return 0;
}
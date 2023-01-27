#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
void game1();
int snakewatergun();
int main()
{
     
    int ch;
    printf("***********************************************************************************\n");
    printf("\t\t\tWELCOME TO GAME STATION\t\t\t\n ");
    printf("***********************************************************************************\n");
    printf("\n****Enter the number of game you want to play****");
    printf("\n\n\t1. Guess number ");
    printf("\n\t2. Snake-Water-Gun");
    printf("\n\t3. Exit");
    printf("\n\nYour choice:");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("You choose to play Guess number game\n");
        game1();
        break;

    case 2:
        printf("You choose to play Snake-Water-Gun game\n");
        snakewatergun();

        break;

    case 3:
        printf("You choose to exit\n");
        exit(0);

    default:
        printf("\nInvalid Choice");
        break;
    }
    return 0;
   
}

void game1()
{
    int number, guess, nguesses = 1;
    srand(time(0)); // for genreting random numbers//
    number = rand() % 100 + 1;
    do
    {
        printf("guess th number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number!!!\n");
        }
        else if (guess < number)
        {
            printf("Higher number!!!\n");
        }
        else
        {
            printf("you guess right in %d attempts\n", nguesses);
        }
        nguesses++;
    } while (guess != number);
}

int snakewatergun()
{
    char you, comp;
    comp = 's';

    printf("Enter 's' for Snake, 'w' for Water, 'g' for gun\n");

    scanf("\n%c", &you);
    if (you == comp)
    {
        printf("Game Draw!!!\n\n");
    }

    if (you == 's' && comp == 'w')
    {
        printf("YOU WIN\n");
    }

    else if (you == 's' && comp == 'g')
    {
        printf("YOU LOOSE\n");
    }

    else if (you == 'w' && comp == 's')
    {
        printf("YOU LOOSE\n");
    }

    else if (you == 'w' && comp == 'g')
    {
        printf("you win\n");
    }

    else if (you == 'g' && comp == 's')
    {
        printf("you win\n");
    }

    if (you == 'g' && comp == 'w')
    {
        printf("YOU LOOSE\n");
    }

    return 0;
}

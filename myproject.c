#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int value;
    printf("Enter 1 for rock.Enter 2 for paper.enter 3 for scissor\n");
    scanf("%d", &value);
    switch (value)
    {
    case 1:
        printf("rock\n");
        break;

    case 2:
        printf("paper\n");
        break;
    case 3:
        printf("scissor\n");
        break;

    default:
        printf("put only from 1 to 3\n");

        break;
    }
    printf("---------------\n");
    printf("|you chose %d|", value);
    printf("---------------\n");

    printf("now its computer ' s turn\n");
    printf("Enter 1 for rock.Enter 2 for paper.enter 3 for scissor\n");
    srand(time(NULL));
    int a;
    a = (rand()%3)+1;
    {
        switch (a)
        {

        case 1:
            printf("rock\n");
            break;

        case 2:
            printf("paper\n");
            break;
        case 3:
            printf("scissor\n");
            break;
        }
    }

    printf("---------------\n");
    printf("|computer chose %d|\n", a);
    printf("---------------\n");

    if ((value == 1 && a == 3) || (a == 1 && value == 2) || (value == 3 && a == 2))
    {
        printf("YOU WON");
    }

    else
    {
        if

            ((value == 3 && a == 1) || (a == 2 && value == 1) || (value == 2 && a == 3))
        {
            printf("COMPUTER WON\n");
            printf("YOU LOST\n");
        }

        else
        {
            printf("its a draw ...try again");
        }
    }
    return 0;
}
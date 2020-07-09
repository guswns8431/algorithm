#include <stdio.h>

int player1 = 0;
int player2 = 0;

void playGame(char p1, char p2)
{
    int result;

    result = p1 - p2;

    switch (result)
    {
    case -3:
        player2++;
        break;

    case -2:
        player1++;
        break;

    case -1:
        player1++;
        break;

    case 0:
        break;

    case 1:
        player2++;
        break;

    case 2:
        player2++;
        break;

    default:
        player1++;
        break;
    }
}

int main()
{
    int t, n;
    char p1, p2;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);

        for (int j = 0; j < n; j++)
        {
            getchar();
            scanf("%c", &p1);
            getchar();
            scanf("%c", &p2);
            playGame(p1, p2);
        }

        if (player1 > player2)
        {
            printf("Player 1\n");
        }
        else if (player1 == player2)
        {
            printf("TIE\n");
        }
        else
        {
            printf("Player 2\n");
        }

        player1 = 0;
        player2 = 0;
    }
}

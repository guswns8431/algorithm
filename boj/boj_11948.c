#include <stdio.h>

int main()
{
    int min1, min2;
    int input;
    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &input);
        if (i == 0)
        {
            min1 = input;
        }
        if (min1 > input)
        {
            min1 = input;
        }
        sum += input;
    }

    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &input);
        if (i == 0)
        {
            min2 = input;
        }
        if (min2 > input)
        {
            min2 = input;
        }
        sum += input;
    }

    printf("%d", sum - min1 - min2);

    return 0;
}
